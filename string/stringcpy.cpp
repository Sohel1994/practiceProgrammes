#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char * myStrCpy ( char *dest , const char *source)
{
    cout<< "================ in myStrCpy() ============================\n";
    cout<< "Destination string : " << dest << " , " << "string need to be copied : "<< source << " \n";       
    int i = 0;
    for( i = 0 ; source[i]!= '\0'; i++)
    {
            dest[i] = source[i];
            
    }
    dest[i]='\0';

    return dest;

}

int main()
{
    char str[10] = "sohel";
    char str1[10] = "devalekar";
    char *cpyStr = myStrCpy(str, str1);

    cout<< "==============================================================\n";
    cout << "copied string is :" << cpyStr ;
}