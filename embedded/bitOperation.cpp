#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int main()
{
    // clear bit 
    int num, n;
    cout<< "Entre the no. for which bit to be set"<<"\n";
    cin>>num;
    bitset<8> b(num);
    cout<<"the binary of num is :" << b <<"\n";
    cout<< "Enter the position at which bit to be set"<<"\n";
    cin>>n;
    num  = num | (1<<n); 
    cout << " the shifted num is : " << num ;


    num  = num | (1<<n); // set bit

    num &= ~(1 << n); // clear bit
    num = num ^( 1<< n ); // toggle bit
}