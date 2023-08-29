#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class check
{
    int i;
    public:
    check () = default;
    check( int a) : i{a}
    {

    }
    ~check() = default;

    check operator++()  // pre increament overload
    {
        //   check temp; 
        //   temp.i = ++i;
        //   return temp;
        ++(this->i);
        return *this;
    } 

    check operator++(int) // int inside barcket inform compiler this is post increament
    {
        //  check temp;
        //  temp.i = i++;
        //  return temp;

        (this->i)++;
        return *this;
    }

    check operator--() // pre decrement overload
    {
         --(this->i);
         return *this;

    }
    check operator--(int) //  int indicate compiler to this is post decreament
    {
        (this->i)--;
        return *this;
    }
    void operator()( int a) 
    {
         this->i = a;
         cout<< " function call () overload \n";
    }
    friend ostream &operator<<( ostream &os , check &c);

};
ostream &operator<<( ostream &os , check &c)
{
     os << c.i << "\n";
     return os;
}

int main()
{
     cout<< " \n post and per incremnt(++) operator overload "<<"\n";
     check c (4);
     c++;
     cout<< c << "\n";
     check d(3);
     ++d;
     cout<< d << "\n"; 

     cout<< "\n post and pre decrement(--) operator overload "<<"\n";
     c--;
     cout<< c << "\n";
     d(4); // function call operator overload;
     --d;
     cout<< d << "\n";


}