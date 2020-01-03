// HERE I M CREATING QUEUE WITHOUT USING STL, WE CAN DIRECTLY CREATE QUEUE BY USING STL
#include<bits/stdc++.h>
// #include <queue> 
using namespace std;

struct node2{
    int data;
    struct node2* next,*prev;
};
// CREATE QUEUE
struct node{
    struct node2* data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(struct node2* val)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = temp;
        // cout<<"Inserted Value -> "<<val->data<<endl;
        rear->next = front;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
        // cout<<"Inserted Value -> "<<val->data<<endl;
    }
}
void dequeue()
{
    struct node *t = front;
    if(front == NULL && rear == NULL)
        cout<<"Underflow";
    else if(front == rear)
    {
        front = rear = NULL;
        free(t);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(t);
    }
}



//CREATE TREE

struct node2* create()
{
    int x;
    struct node2* temp = (struct node2*)malloc(sizeof(struct node2));
    cout<<" Enter The Value (-1 for end) ";
    cin>>x;
    if(x == -1)
        return NULL;
    temp->data = x;
    cout<<"Enter Left Child of "<<x;
    temp->prev = create();
    cout<<"Enter Right Child of "<<x;
    temp->next = create();
    return temp;    
}
//CODE FOR LEVEL ORDER
void LevelOrder(struct node2 *root)
{
    if(root == NULL)
        return;
    // queue <struct node2*> Q; 
    enqueue(root);
    while(front != NULL && rear != NULL)
    {
        struct node2* temp = front->data;
        dequeue();
        cout<<temp->data;
        if(temp->prev)
            enqueue(temp->prev);
        if(temp->next)
            enqueue(temp->next);
    }    
}
int main()
{
    struct node2 *root;
    root = create();
    LevelOrder(root);
}
