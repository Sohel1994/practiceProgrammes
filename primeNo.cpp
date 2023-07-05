#include<iostream>
using namespace std;

int main()
{
    // int num ;
    // cin >> num;

    // cout<<" entered number is : "<< num <<"\n";

    // bool is_prime = true;
    // if(num == 0 || num == 1)
    // {
    //    is_prime = false;
    //    cout<<" entered num is 0 or 1"<<"\n";
    // }
    // // for loop for condition prime number check.
    // for (int i = 2 ; i<=num/2 ; i++)
    // {   
    //     if(num % i == 0 )
    //     {
    //         is_prime= false;
    //         cout << " number is not prime : "<< num <<" \n";
    //         break;
    //     }
    // }

    // if(is_prime)
    // cout<< " the numeber is Prime : " << num <<"\n";


    //=================== print range base prime numbers=======================//
    
    int low , high;
    bool is_prime = true;
    cout<<" entered the range of prime no you want to print"<<"\n";
    cout<<" low :";
    cin>>low;
    cout <<" high:";
    cin>>high;
    
    cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

    // using while loop for range of prime numbers to be print in between.
    while( low < high)
    {
        is_prime = true;

        if(low == 0 || low == 1)
        {
            is_prime = false;
        }
         
        
        // prime numbers are divisible by itself or 1;
        for ( int i = 2 ;i<=low/2 ; i++)
        {
            if( low % i == 0)
            {
                is_prime = false;
                break;
            }

        }

        if (is_prime)
        {
            cout<< low <<", ";
        }
        
        ++low;
    }


}