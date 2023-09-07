#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int myStrStr( char *dest , char *source)
{

    int i = 0 , flag = 0;
    for ( i = 0 ; dest[i]!='\0'; i++ ) // looping over main string
    {
        int count = 0 ; // 
           if (dest[i] == source[count]) // first char of substing match condition
           {
                for (int j = i+1,count = 1; source[count]!='\0'; count++, j++)
                {
                    cout << " dest :" << dest[j] << " source :" << source[count] <<"\n";
                    if ( dest[j]!=source[count])
                    {
                        break;
                    }
                    else
                    {
                        flag = 1;
                    }

                }
           }
    }

    cout << "flag value " << flag <<"\n";
    return flag;
}

int main ( )
{   

     char str1[30] = "sohel allauddin devalekar";
    char str2[30] = "ddin";
     int value ;

     value = myStrStr(str1,str2);

     if ( value == 1)
     {
         cout << "substrig found "<< "\n";
     }
     else 
     {
        cout<< " substring not found " << "\n";
     }


}