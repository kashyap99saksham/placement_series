#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size1,size2,sum,v;
        cin>>size1>>size2>>sum;
        unordered_set <int> s;
        int arr[size1];
        for (int i = 0; i < size1; i++)
            cin>>arr[i];
        sort(arr,arr+size1);
        for (int i = 0; i < size2; i++)
        {
            cin>>v;
            s.insert(v);
        }
        bool flag = false;
        for (int i = 0; i < size1; i++)
        {
            int dif = sum-arr[i];
            if(s.find(dif)!=s.end())
            {
                if(flag==false)
                {
                    cout<<arr[i]<<" "<<dif;
                    flag = true;
                }
                else
                    cout<<","<<" "<<arr[i]<<" "<<dif;   
            }
        }    
        if(flag==false)
            cout<<-1; 
        cout<<endl;
    }
}