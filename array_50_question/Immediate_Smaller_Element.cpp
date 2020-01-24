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
        vector <int> v;
        int val;
        for (int i = 0; i < size; i++)
        {
            cin>>val;
            v.push_back(val);
        }
        for(int i =0;i<size-1;i++)
        {
            if(v[i+1]<v[i])
            {
                cout<<v[i+1]<<" ";
            } 
            else
                cout<<-1<<" ";
        }
        cout<<-1;
        cout<<endl;
    }
}