#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int i=0,size,val,count=0;
        cin>>size;
        int arr[size];
        for(int j=0;j<size;j++)
        {
            cin>>val;
            if(val==0)
            {
                count++;
                continue;
            }
            arr[i++] = val;
        }
        while(count--)
            arr[i++]=0;
        for(int i=0;i<size;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
}