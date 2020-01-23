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
        int *arr = new int[size];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }
        int k;
        cin>>k;
        int max = *max_element(arr, arr + size);
        // cout<<max;  
        int hash[max+1]={ 0 };
        for (int i = 0; i < size; i++){
            hash[arr[i]]+= 1;
        }
        int z=0;
        for (int i = 0; i <=max; i++)
        {
            if(hash[i]==1)
               arr[z++] = i;
        }
        // for(int i=0;i<size;i++){
        //     cout<<arr[i];
        // }
        cout<<arr[k-1];        
    }
}