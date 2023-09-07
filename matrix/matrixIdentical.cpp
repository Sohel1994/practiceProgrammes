#include<iostream>
using namespace std;
#define N 3

bool identical( int (*p)[N] , int (*q)[N])
{

    for(int i = 0; i < N ; i++)
    {
    for (int j = 0 ; j < N ; j++)
        {
         if(p[i][j] != q[i][j])
          return false;
        }
     }
     return true;

}

int main ()
{ 
    int a[N][N] = {{1,2,3} , {5,7,6} , {8, 9, 10}};
    int b[N][N] = {{1,2,3} , {5,7,6} , {8, 9, 10}};
    
    if (identical( a , b ))
    cout << " both matrix are identical"<<"\n";
    else 
    cout << " both matrixf are not identical "<< "\n";

}