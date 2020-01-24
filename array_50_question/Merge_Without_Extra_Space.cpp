#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size1,size2;
        cin>>size1>>size2;
        int arr1[size1],arr2[size2];
        for (int i = 0; i < size1; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0; i < size2; i++)
        {
            cin>>arr2[i];
        }
        int n;
        n = size1+size2;
        // cout<<n;
        int i=0,j=0;
        while(n--)
        {
            if(arr1[i]<arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
            }
            else
            {
                cout<<arr2[j]<<" ";
                j++;
            }
        }
        cout<<endl;                
    }
}