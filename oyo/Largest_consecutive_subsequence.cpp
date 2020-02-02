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
        int arr[size],ans=INT_MIN;
        unordered_set<int> s;
    
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);
        }   
        for(int i=0;i<size;i++)
        {
            if(s.find(arr[i]-1)==s.end())
            {
                int count = 0;
                while(s.find(arr[i])!=s.end())
                {
                    count++;
                    ans = max(ans,count);
                    arr[i] = arr[i]+1;
                }
            }
        }
        cout<<ans<<endl;
    }
}