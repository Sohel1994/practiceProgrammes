#include<iostream>
using namespace std;
int main()
{   
       int array[10] = {1,1,2,5,2,1,0,0,1,3};
       int max = 0;

       for( int i = 0 ; i < 10; i++ )
       {   
           
           for (int j = i+1 ; j < 10 ; j++)
           {  
                if( array[i] < array[j])
                    max = array[j];
           }

       }
       cout << " max " << max << "\n";
}  