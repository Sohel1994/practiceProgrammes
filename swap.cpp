#include<iostream>
using namespace std;

void swap1( int &a , int &b)
{
    
     int temp;
     temp = a;
     a = b;
     b = temp;
}

void swap2( int *p, int *r)
{
    *p = *p + *r;
    *r = *p - *r;
    *p = *p - *r;
}

int main ()
{ 
     int num1 , num2;
     cout<< "enter the number for swap "<< " \n";
     cin>> num1 >> num2;
     swap1( num1, num2);
     cout<<"num 1:"<<num1<<" num2:"<<num2<<"\n";
     cout<<"=========================================="<<"\n";
     swap2( &num1, &num2);
     cout<<"num 1:"<<num1<<" num2:"<<num2<<"\n";


}