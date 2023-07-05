#include<iostream>
using namespace std;
int main()
{
      
      int *ptr;
      int a = 20; 
      ptr = &a;
      cout<< *ptr << "\n";

      const int *ptr2 ; // or  int const *ptr2;
      int b = 30;
      ptr2 = &b;
      cout<< *ptr2 << "\n";
      //*ptr2= 40; //read only memory location can not change the value. 

      int c = 40;
      int *const ptr3 = &c;
      cout<< *ptr3 << "\n";
      //ptr3 = &a; //  ptr can not be modified where it is pointing to.
      
      const int d = 50;
      const int *const ptr4 = &d;
      cout<< *ptr4 << "\n";
     // d = 60; // d is const int can not be modify.
      cout<< *ptr4 << "\n";

}