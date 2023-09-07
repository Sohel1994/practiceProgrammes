#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main() 
{
  vector <int> nums =  { 6,2,6,5,1,2};
  sort( nums.begin() , nums.end()); 
  vector<int>::iterator i;

  for ( i = nums.begin() ; i<nums.end(); i++)
     cout<<*i<<" ";
}