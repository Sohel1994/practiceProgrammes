#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;


int main()
 {      
        vector <int> nums = { 1,2,3,5,6};

        bool t = true;
        for( int i = 0 ; i<nums.size() ; i++)
        {

            t = true;
            cout <<nums[i] << " " << nums[i+1] << " " << "\n ";

            if ( nums[i] <= nums[i+1])
            {
             continue;
            }
            else
            {
                t = false;
                break;
            }
        }

        bool t1 = true;
        for( int i = 0 ; i<nums.size() ; i++)
        {
            if ( nums[i] >= nums[i+1])
            {
                continue;
            }
            else 
            {
                t1 = false;
                break;
            }
        }

        if(t || t1)
        { 
            cout << " array is monotonic";
        }
}