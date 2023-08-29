#include<iostream>
using namespace std;

int main()
{
   int num = 12345;
   int reminder = 0;
   int sum = 0;

   while(num)
   { 
        reminder = num%10; // 12345 % 10 = 5

        sum = (sum * 10) + reminder; // 0*10+5 = 5 
                                     // 5*10+4 = 54

        num = num/10; // 12345/10 = 1234
   }

   cout << " reverse number is :" << sum;

}