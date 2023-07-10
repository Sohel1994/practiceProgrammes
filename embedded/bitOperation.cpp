#include<iostream>
#include <bits/stdc++.h>
using namespace std;

/*======================= Bit operations ====================================*/

// Note : n is position at which bit operation need to be perform 

//(1)num = num | (1<<n);        //set bit 
//(2)num &= ~(1 << n);          //clear bit
//(3)num = num ^( 1<< n );      //toggle bits

/*===========================================================================*/


int main()
{
    int num, n;

    //(1)num = num | (1<<n); //clear bit 
    // cout<< "Entre the no. for which bit to be set"<<"\n";
    // cin>>num;

    // bitset<8> b(num); // give binary value upto 8 bits.

    // cout<<"the binary of num is :" << b <<"\n";
    // cout<< "Enter the position at which bit to be set"<<"\n";
    // cin>>n;

    // num  = num | (1<<n); //set bit logic.

    // cout << " the set num is : " << num  << "\n";
    // bitset<8> c(num); // give binary value upto 8 bits for set bit.
    // cout<<" the binary  of set num is :" << c <<"\n";

// ====================================================================================================//

    //(2)num &= ~(1 << n); // clear bit
    // cout<< "Entre the no. for which bit to be clear"<<"\n";
    // cin>>num;
    
    // bitset<8> b(num); // give binary value upto 8 bits.

    // cout<<"the binary of num is :" << b <<"\n";
    // cout<< "Enter the position at which bit to be clear"<<"\n";
    // cin>>n;

    // num &= ~(1 << n);//clear bit logic.

    // cout << " the clear num is : " << num  << "\n";
    // bitset<8> c(num); // give binary value upto 8 bits for set bit.
    // cout<<" the binary  of clear num is :" << c <<"\n";

//======================================================================================================//

    // (3)num = num ^( 1<< n ); // toggle bit
    cout<< "Entre the no. for which bit to be toggle "<<"\n";
    cin>>num;
    
    bitset<8> b(num); // give binary value upto 8 bits.

    cout<<"the binary of num is :" << b <<"\n";
    cout<< "Enter the position at which bit to be toggle"<<"\n";
    cin>>n;
    
    num = num ^( 1<< n ); // toggle bit logic

    cout << " the toggle num is : " << num  << "\n";
    bitset<8> c(num); // give binary value upto 8 bits for set bit.
    cout<<" the binary  of toggle num is :" << c <<"\n";
}