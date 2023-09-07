
/* rotate matrix by 90 degree */
#include<iostream>
using namespace std; // namespace std;
#define N 3

/* get dynamic array */
int **getArray ()
{
       int **arr ;
       arr = new int *[N];
       int count = 1;
       for(int i =0 ; i< N ; i++)
       {
            arr[i] = new int[N];
            for (int j =0 ; j<N ; j++)
            {
                  arr[i][j] = count++;
                  cout <<arr[i][j] << " ";
            } 
            cout << "\n";

       }
       return arr;
     
}

void rotateclockwise( int **ptr)
{
     // first transpose of matix 
     cout << "================transpose===================== \n";
     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j<= i  ; j++ )
        {
        swap(ptr[i][j] , ptr[j][i]); 
        }  
     }

     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j< N  ; j++ )
         cout << ptr[i][j] <<" ";
         cout << "\n";
     }

    cout << "===================Clockwise===============\n";

    // rotate 90 degree clockwise direction. by swaping last with first colunm after transpose.
    for (int i = 0 ; i < N ; i++)
    {
        int f = 0 ; int l = N-1;
        while ( f < l)
        {
            swap( ptr[i][f] , ptr[i][l]);
            f++;
            l--;
        }
    }

     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j< N  ; j++ )
         cout << ptr[i][j] <<" ";
         cout << "\n";
     }

  
}

void rotateanticlockwise( int **ptr)
{
     // first transpose of matix 
     cout << "================transpose===================== \n";
     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j<= i  ; j++ )
        {
        swap(ptr[i][j] , ptr[j][i]); 
        }  
     }

     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j < N  ; j++ )
         cout << ptr[i][j] <<" ";
         cout << "\n";
     }

    cout << "==================Anticlockwise================\n";

    // rotate 90 degree anticlockwise direction. by swaping last with first colunm after transpose.
    for (int i = 0 ; i < N ; i++)
    {
        int f = 0 ; int l = N-1;
        while ( f < l)
        {
            swap( ptr[f][i] , ptr[l][i]);
            f++;
            l--;
        }
    }

     for (int i = 0 ; i < N ; i++)
     {
        for (int j = 0 ; j< N  ; j++ )
         cout << ptr[i][j] <<" ";
         cout << "\n";
     }

  
}

int main ()
{    
    int **mat = getArray();
   // rotateclockwise(mat);
    rotateanticlockwise(mat);


}
