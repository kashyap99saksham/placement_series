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
        int arr[size],brr[size];

        // TAKING BOTH ARRAY
        for(int i=0;i<size;i++)
            cin>>arr[i];
        for(int i=0;i<size;i++)
            cin>>brr[i];
        
        // SORTING
        bool flag = true;
        sort(arr,arr+size);
        sort(brr,brr+size);
        for (int i = 0; i < size; i++)
        {
            if(arr[i]!=brr[i])
            {
                flag = false;
                cout<<0;
                break;
            }
        }
        if(flag==true)
            cout<<1;
                
        cout<<endl;
    }

}
