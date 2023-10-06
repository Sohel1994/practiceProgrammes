#ifndef SINGLY
#define SINGLY

struct node 
{
     int data;
     struct node *next;
};

struct node *START = nullptr; 

struct node *createNode();
void addNodeatStart();
void addNodeatend();
void deleteatStart();
void addatmiddleofNode();
void deleteatEnd();
void deletmiddle();
void findmiddleoflist();
void displaylist();

#endif