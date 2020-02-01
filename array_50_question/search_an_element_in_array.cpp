#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   cin>>test;
    while(test--)
    {
        int size;   cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        int ele;    cin>>ele;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==ele)
            {cout<<i;break;}
        }cout<<endl;
    }
}