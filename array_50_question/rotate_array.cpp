#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,rot;
        cin>>size>>rot; 
        int *arr = new int[size];
        for (int i = 0; i < size; i++)
            cin>>arr[i];
        for(int i=rot;i<size;i++)
            cout<<arr[i];
        for (int i = 0; i < rot; i++)
        {
            cout<<arr[i];
        }
        cout<<endl;                  
    }
}