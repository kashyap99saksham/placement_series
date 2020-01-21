#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
}
