// IMPLEMENTATION OF Circular-QUEUE USING LINKLIST
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int val)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data=val;
    temp->next=NULL;
    if(front == NULL && rear == NULL)
    {
        front = rear = temp;
        cout<<"Inserted Value -> "<<val<<endl;
        rear->next = front;
    }
    else
    {
        rear->next = temp;
        rear = temp;
        rear->next = front;
        cout<<"Inserted Value -> "<<val<<endl;
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
        cout<<"Deleted Value -> "<<front->data<<endl;
        front = front->next;
        rear->next = front;
        free(t);
    }
}
void display()
{
    if(front == NULL && rear == NULL)
    {
        cout<<"Empty";
        return;
    }
    struct node* temp = front;
    while(temp->next != front)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<temp->data<<endl;
}
int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    display();
    dequeue();
    display();
}
