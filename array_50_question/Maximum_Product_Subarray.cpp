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
        for(int i=0;i<size;i++)
            cin>>arr[i];
        int current_max = arr[0], current_min = arr[0],ans = arr[0],prev_max = arr[0],prev_min = arr[0];
        for(int i=1;i<size;i++)
        {       
            current_max = max(prev_max*arr[i],max(prev_min*arr[i],arr[i]));
            current_min = min(prev_max*arr[i],min(prev_min*arr[i],arr[i]));
            ans = max(ans,current_max);
            prev_max = current_max;
            prev_min = current_min;
        }
        cout<<ans<<endl;
    }
}