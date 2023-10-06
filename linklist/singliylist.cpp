#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include"singliylist.h"
using namespace std;

int main()
{
    addNodeatStart();
    addNodeatend();
    addNodeatend();
    addNodeatend();
    addNodeatend();

    addatmiddleofNode();
    displaylist();

    // deleteatStart();
    // cout << " after deletion of first node \n";
    // displaylist();
    // deleteatEnd();
    // cout << " after deletion of last node \n";
    // displaylist();
    
    //findmiddleoflist();

    
    // deletmiddle(); // delete middle node 
    //                // if t->next->data == array[i/2]
    //                //t->next = t->next->next

    // cout <<" list after middle node\n";
    // displaylist();
}

struct node *createNode()
{
    struct node *n = new node();
    return n;
}

void displaylist()
{
   struct node *t;
   if(START==NULL)
   {
     cout<< "list is empty"<<"\n";
   }
   else
   {
      t = START;
      while(t!= NULL)
      {  
        cout<< " the list data " << t->data <<"\n";
        t = t->next;
      }
   }   
}

void addNodeatStart()
{
   struct node *temp = createNode();
   cout << " take user input \n";
   cin>> temp->data;
   temp->next = NULL;
   if( START == NULL)
   {
     START = temp;
   }
   else
   {
     temp->next = START;
     START = temp;     
   }

}

void addNodeatend()
{
   struct node *t;
   struct node *temp = createNode();
   cout << " take user input \n";
   cin>> temp->data;
   temp->next = NULL;

   if( START == NULL)
   {
       cout<< " list is emplty \n";
   }  
   else
   {
      t = START;
      while (t->next != NULL)
      {
         t = t->next;     
      }
      t->next = temp;
  }
}

void addatmiddleofNode()
{
     struct node *t,*t1, *temp;
     temp = createNode();
     cout<<" add node data :" << "\n";
     cin >> temp->data;
     temp->next = NULL;

     int array[10] , i = 0 ;
     t = START;
     while(t!= NULL) 
     {
        array[i++] = t->data;
        t = t ->next;
     }
     cout << " the middle of node is : "<< array[i/2] <<"\n";
     
     t1 = START;
     while ( t1 != NULL)
     {
        if ( t1->data == array[i/2])
        {
            temp->next = t1->next;
            t1->next = temp;
        }
        t1 = t1->next;
     }


}

void deleteatStart()
{
     struct node *t ;
     if (START == NULL)
     {
        cout <<" list is empty "<< "\n";
     }
     else
     {
        t = START ;
        START = START->next;
        delete t;
     }

}
void deleteatEnd()
{
      struct node *t , *t1;
      t = START;
      if (START == NULL)
      {
        cout << " list is empty \n";
      }
      else
      {
        t = START;
        while(t->next != NULL)
        {
            t1 = t;
            t = t->next;
        }
        t1->next = NULL;
        delete t; 
      }
}

void deletmiddle()
{
    struct node *t ,*t1,*t2 ;
    t =  START;
    int array[10];
    int i = 0;
    while ( t != NULL)
    {
        array[i++] = t->data ;
        t = t ->next;
    }
    cout << "middle of node " <<array[i/2] <<"\n";

    t1 = START;
    while( (t1 != NULL) && (t1->next != NULL) )
    {    
         if(t1->next->data == array[i/2])
         { 
           t2 = t1->next; 
           t1->next = t1->next->next;
           delete t2;
         } 
         else
         t1 = t1->next;
    }

}

void findmiddleoflist()
{
     int array[10];
     vector <int> v;
     struct node *t;
     t = START;
    //  while(t != NULL)
    //  {
    //      v.push_back(t->data);
    //      t = t->next;
    //  }
    
    // cout << " middle of node is " << v[v.size()/2] ;
    int i = 0;

    while ( t != NULL)
    {
        array[i++] = t->data ;
        t = t ->next;
    }

    cout << "middle of node " <<array[i/2];
}