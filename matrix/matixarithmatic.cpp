/* problem do some arithmatic operation on given matrix*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define N 3

int ** dynamicMatx()
{  
      
      int **matx = new int*[N];
      int count = 1;
      for( int i = 0  ; i< N ; i++)
         {
             matx[i] = new int [N];
             for ( int j = 0 ; j < N ; j++)
             {
                   matx[i][j] = count++;
             }
         }
        return matx;
}

void displayMatx( int **matx)
{
      for ( int i = 0 ; i<N ; i++ ,cout<<"\n")
      {
        for ( int j = 0 ; j < N ; j++)
            {
                cout << matx[i][j] << " ";
            }
    
      }
}

// addintion of 2 matrix 
int **addition( int **a , int **b)
{
     int **arr = new int *[N];
      for ( int i = 0 ; i<N ; i++ )
      {
         arr[i] = new int[N];
        for ( int j = 0 ; j < N ; j++)
        {
            arr[i][j] = a[i][j]+b[i][j];
        }
      }
      return arr;
}

// matix substraction.
int **substraction( int **a , int **b)
{
     int **arr = new int *[N];
      for ( int i = 0 ; i<N ; i++ )
      {
         arr[i] = new int[N];
        for ( int j = 0 ; j < N ; j++)
        {
            arr[i][j] = a[i][j]-b[i][j];
        }
      }
      return arr;
}

int **multiplication( int **a , int **b)
{
     int **arr = new int *[N];
      for ( int i = 0 ; i<N ; i++ )
      {
         arr[i] = new int[N];
        for ( int j = 0 ; j < N ; j++)
        {
            arr[i][j] = a[i][j] * b[i][j];
        }
      }
      return arr;
}



int main()
{
          
          int **m= dynamicMatx();
          int **n= dynamicMatx();
          displayMatx(m);
          cout << "===========================================\n";
          displayMatx(n);
     
          int **arith;
          arith = addition(m,n);
          cout << "===========================================\n";
          displayMatx(arith);

          arith = substraction(m,n);
          cout << "===========================================\n";
          displayMatx(arith);

          arith = multiplication(m,n);
          cout << "===========================================\n";
          displayMatx(arith);
          
    
      
}