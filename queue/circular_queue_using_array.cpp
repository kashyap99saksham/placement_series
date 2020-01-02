// IMPLEMENTATION OF Circular-QUEUE USING ARRAY
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
    else if((rear+1) % MAX == front)
        cout<<"Overflow";
    else
    {
        rear = (rear+1) % MAX;
        arr[rear] = val;
    }
    
}
void dequeue()
{
    if(front == -1 && rear == -1 )
        cout<<"UnderfLow";
    else if(front == rear)
    {
        cout<<arr[front]<<" Is Deleted"<<endl;
        front = rear = -1;
    }
    else
    {
        cout<<arr[front]<<" Is Deleted"<<endl;
        front = (front+1)%MAX;
    }
    
}
void display()
{
   
    if (front == -1 && rear == -1) 
    { 
        printf("\nQueue is Empty"); 
        return; 
    } 
    printf("\nElements in Circular Queue are: "); 
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            cout<<arr[i]; 
    } 
    else
    { 
        for (int i = front; i < MAX; i++) 
            printf("%d ", arr[i]); 
        for (int i = 0; i <= rear; i++) 
            printf("%d ", arr[i]); 
    } 
}
int main()
{
    display();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    dequeue();
    dequeue();
    // dequeue();
    // dequeue();
    enqueue(1);
    enqueue(1);
    display();
}
