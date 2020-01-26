#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size;
        cin>>size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        int L[size],R[size];
        int max=arr[0];
        L[0] = arr[0];
        for (int i = 1; i < size; i++)
        {
            if(arr[i]>max)  
            {
                max = arr[i];
                L[i] = max;
            }
            L[i] = max;
        }
        max = arr[size-1];
        // int z = size-1;
        for (int i = size-1; i >= 0; i--)
        {
            if(arr[i]>max)
            {
                max = arr[i];
                R[i] = max; 
            }
            R[i] = max;
        }
        int water=0;
        for (int i = 0; i < size; i++)
        {
            water += min(L[i],R[i])-arr[i];
        }
        cout<<water;
        
        
        
        
    }
}