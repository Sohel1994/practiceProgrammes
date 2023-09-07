/*You are given two non-empty linked lists representing two non-negative integers.
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself. *

Example : 
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.                      
*/

// reverse the digit
/*           digit = num % 10;
*          rev = (rev * 10) + digit;
*          num = num / 10;
*/


#include<iostream>
using namespace std;


// Definition for singly-linked list.
struct ListNode 
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {} 
};

// add elemetnt to the form list return new list
ListNode* addTwoElemnt ( ListNode *l1 , ListNode *l2)
{

      ListNode *add = new ListNode();;
      ListNode *temp = add;
      temp = add;
      int carry = 0;
      while( l1!= NULL || l2!= NULL || carry)
      {
          int sum = 0;// to addition from 2 list value.
          if(l1!= NULL)
          {
            sum = sum+l1->val;
            l1=l1->next;
          }
          if(l2!= NULL)
          {
            sum = sum+l2->val;
            l2=l2->next;
          }
          sum = sum+carry;
          carry = sum/10; //  if addition beyoun 10 example 12/10  carry = 1
          ListNode *newNode = new ListNode(sum%10); // example 10% 10 = 0 or 18%10 = 8

          temp->next=newNode;  // attaching new sum value node to to temp next;
                                
          temp = temp->next;    // 1 st time add and temp are pointing same so we are not loosing list add.
                                // moving temp forward;  
      }
      
      return add->next; // initilization done value is zero for creating add node
                        //  and list is from by temp moving forward so value is witten in next node which 
                        //   is attached in add->next; 


}


ListNode* addElemnt() // add element to the list user input.
{
       int data;
       cout<< " \n take user date to fill the list" << " \n";

       ListNode *head = NULL; // to the starting point of link list
       ListNode *temp  = NULL; // to appent the node to the link list.

       // we will stop the loop when user enter -1 to stop fill the list
       while(data != -1)
       {
           ListNode *newNode = new ListNode(data);
           if(head == NULL)
           {
             //no data in linklist so we appent the data with new node.
             head = newNode;
             temp = newNode;
           }

           else 
           {
              temp->next = newNode;
              temp = temp->next;
           }
           cin >>data;
       }
      return head->next; //insted of head oterwise garbage data is their.

}

void display( ListNode *head) 
{
     ListNode *temp = head;
     while(temp!= NULL)
     {
        cout<<temp->val<< " ";
        temp = temp->next;
     }

}


int main()
{

     ListNode *l1 = addElemnt(); // l1 = [2,4,3]
     // print the list l1
     display(l1);

    cout << " \n =========================================== \n";

    ListNode *l2 = addElemnt();  // l2 = [5,6,4]
    // print the list l2
     display(l2);


     cout << " \n ============= addition from two list values ===========\n";
     ListNode *addition = addTwoElemnt(l1,l2);
     display(addition);    //Output: [7,0,8]


}
