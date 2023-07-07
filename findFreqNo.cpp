#include<iostream>
using namespace std;

int fequency( int n , int k)
{

     int count = 0;
     while(n > 0)
     {
            
         if(n%10==k)
         {
            count++;
         }
         n = n/10;

     }
    
    return count;
}
int main()
{

   int num = 1673823294;
   int k, frqNo;
   cout<< "find the freq on given NO"<<"\n";
   cin>>k;
   frqNo = fequency( num , k);
   cout << "freq of the number in given num is :"<<frqNo;

}