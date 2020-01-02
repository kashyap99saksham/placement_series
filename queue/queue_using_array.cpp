#define MAX 5
#include<bits/stdc++.h>
using namespace std;
int arr[MAX],front = -1,rear = -1;
void enqueue(int val)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        arr[rear] = val;
    }
    else if(rear == MAX-1)
        cout<<"Overflow";
    else
    {
        rear++;
        arr[rear] = val;
    }
    
}
void dequeue()
{
    if(front == -1 && rear == -1 )
        cout<<"UnderfLow";
    else if(front == rear)
    {
        cout<<arr[front]<<" Is Deleted";
        front = rear = -1;
    }
    else
    {
        cout<<arr[front]<<" Is Deleted";
        front++;
    }
    
}
void display()
{
    if(front == -1 && rear == -1)
    {
        cout<<"Empty Queue"<<endl;
    }
    else
    {
        for(int i=front;i<rear+1;i++)
        {
            cout<<arr[i];
        }
    }    
}
int main()
{
    display();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    dequeue();
    display();
}
