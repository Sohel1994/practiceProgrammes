/* problem statement 
 -Design algorithm that collects daily price quotes for some stock
  returns the span for current day .
 -the span of stocks price today is defined as the max no of consecative days (starting from today and 
 and going backword) for which the stock price was less than or equal to today's price.
 - example  input  price[] = [100 80 60 70 60 75 85]  and output span [] = { 1 1 1 2 1 4 6} */

#include<iostream>
using namespace std;

void calculateSpan( int price[] , int span[] , int n)
{  
    span[0] = 1; // span value for 1st day always 1

    for (int i = 1 ; i< n ; i++) // { 100 ,80, 60, 70, 60, 75, 85}
         {

            /* for i = 4  ; price[i] = price[4] = 75 */ 

            span[i] = 1; //span alwaya init to one for i loop.

            for ( int j = i-1 ; ( j >=0 ) && price[i]>= price[j] ; j--)
            {       

              
                span[i] = span[i]+1;  // increameting stock span compairing with consicative prices are 
                                      // if smaller
                
            /*============================Explaination==========================================*/

                //   1) // j = 4-1 = 3  ;  3>=0 && 75 > 60 
                //      // span[4] = 1+1 =2;  j-- = 2;
                  
                //   2) // for j = 2   ;   2>=0 && 75 > 70 
                //      // span[4] = 2+1 =3; j-- = 1;
                  
                //   3) // for j = 1  ;    1>=0 && 75 > 60 
                //      // span[4] = 3+1 =4; 

                //   4) //for j = 0  ;     0>=0 && 75 > 80 - false
                //      // so span[4] = 4 break j loop hear
             
             /* =================================================================================*/

            }

         }



}

void displaySpan(int s[] , int n)
{
     for (int i = 0 ;  i<n ; i++)
          cout << s[i] << ",";
    
}
int main()
{
    int price [] = { 100 ,80, 60, 70, 60, 75, 85}; 
    int n = sizeof(price)/ sizeof(price[0]); 
    int span [n];

    calculateSpan( price , span , n);
    displaySpan( span ,n);


}