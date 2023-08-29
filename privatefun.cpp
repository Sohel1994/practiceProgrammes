#include<iostream>
using namespace std;

class A{

    int n;
    int m;

    void add()
    {
         cout<<m+n << "\n";
    }

    public:
    A( int a , int b)
    {
        n = a;
        m = b;
        cout<<" i am A prametized constructor\n";
    }
     
     void result()
     {
        add();
     }

};

template<typename T>
void sub( T a , T b)
{

   cout << a - b ;

}

int main()
{
    
    A a( 6,7);
    a.result();

    sub <float>( 13.5 , 45.6);
    

}
