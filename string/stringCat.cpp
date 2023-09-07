#include<iostream>
#include<bits/stdc++.h>

using namespace std;

char* myStrCat( char * dest , const char *source )
{
      char *ptr = dest + strlen(dest); // ptr is at '\0' of dest string 

      int i = 0;
      for (i = 0 ; source[i]!='\0';i++)
      {
        ptr[i] = source[i];
      }
      ptr[i] = '\0';

      return dest;

}
int main ()
{
     char str1[20] = "sohel";
     char str2[20] = "devalekar";
     
     char *Catstr = myStrCat(str1, str2);

     cout << " My concatinate string is : " << Catstr << "\n";


}