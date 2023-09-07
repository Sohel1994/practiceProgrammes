#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int myStrCmp ( const char* dest , const char *source)
{

      while (*dest == *source)
      {
            if(dest=='\0')
            return 0;
            dest++;
            source++;
      }

      cout << "dest string char:"<<  *dest <<", source string char:"<< *source << "\n";

      return (*dest - *source);  // reterun substraction alphnumeric value of characters. 

// method 2 using for loop 
//      int i = 0 , len1= 0, len2 = 0 , flag = 0;

//     for (i=0;dest[i]!='\0';i++)
//     {
//         len1++;
//     }
//     for(i=0;source[i]!='\0';i++)
//     {
//         len2++;
//     }

//     if(len1!=len2)
//     return 1;
    
//     else
//     {
//          for( i = 0 ; i<len1 ; i++)
//          { cout << dest[i] << " " << source[i]<<"\n";
//             if (dest[i]!=source[i])
//             {
//                 flag = 1;
//                 break;
//             }
//          }
//     }

//    cout << flag << " \n";
//     if (flag == 0)
//     {
//         return 0;
//     }

//     else 
//     return 1;

}

int main() {
    // Write C++ code here
    char str1[] = "sohel";
    char str2[] = "suraj";
    char str3 [] = "sohel";
    int value ;
    value = myStrCmp(str1 , str2);
    cout <<" return value "<< value << "\n";
    if( value == 0)
    cout<< " string are equal \n";
    else 
    cout <<"string are not equal \n";

    return 0;
}