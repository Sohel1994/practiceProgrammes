#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int mystrlen( const char * dest)
{
      int i = 0;

      for (i = 0 ; dest[i]!='\0';i++) // the loop break at the null char of string.
      {
         
      }
      return i;

}

int main ( )
{

    char str[] = "sohel";
    int len = 0;
    len = mystrlen(str) ;
    cout << " the string lenth is :"<< len ;

}