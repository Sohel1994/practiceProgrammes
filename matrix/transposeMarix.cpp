
/* statement : make the matix row as colunm and vise versa 

input : int mat[][] = {
                            {1,2,3} , 
                            {4,5,6} , 
                            {7,8,9}
                         };

output : int mat[][] = { 
                            {1,4,7} , 
                            {2,5,8} , 
                            {3,6,9}
                          };
                          
*/

#include<iostream>
using namespace std;
#define N 3

void transpose( int (*p)[N])
{

    for (int i = 0 ; i<N ; i++)
    {
         for (int j = 0; j<=i ; j++) 
         { 
              swap(p[i][j] , p[j][i]);  // diagonal element swap
         }
    }
   
}

int main()
{
     
int mat[N][N] =  {
                    {1,2,3} , 
                    {4,5,6} , 
                    {7,8,9}
                 };

    
    transpose(mat);

    for (int i =0 ;i<N ;i++)
    {
         for (int j = 0 ; j<N  ; j++) 
         { 
              cout << mat[i][j] << " ";
         }
         cout<< "\n";
    
    }

}