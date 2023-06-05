#include<iostream>
using namespace std;

int add( int  , int );

int sub( int , int  );

int mul( int , int  );

int main()
{
   int result;
   int ( * fun ) (int , int ) =  add; // funtion pointer declaration.

   result = fun(10,20);
   cout<<" the result of add is : "<< result << "\n";
 
 /*===================================================================================================================================*/
   int ch;
   int ( * fun2[]) ( int , int ) = { add/* index [0]*/ , sub/* index [1]*/ , mul/* index [3]*/ }; // array of functiom pointer declaration.
   
   cout<<" take user input for arithmatic opration : "<< "\n";
   cin >> ch;
   result = ( fun2[ch])( 40, 20);
   cout<<" the result is function pointer array index["<< ch <<"] = " << result << "\n";
}


int add (int a , int b)
{
    int c;
    c = a+b;
    return c;
}

int sub( int a, int b)
{
    int c;
    c = a-b;
    return c;
}

int mul( int a, int b)
{
    int c;
    c = a*b;
    return c;

}