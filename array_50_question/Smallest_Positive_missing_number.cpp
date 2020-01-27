#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int test;
    cin>>test;
    while(test--)
    {
        long long int size;   cin>>size;
        unordered_map <int,int> s;
        long long int max=0;
        for (long long int i = 0; i < size; i++)
        {
            int val;
            cin>>val;
            if(val<1)
                continue;
            s[val] = 1;
            if(val>max)
                max = val;
        }
        bool flag = false;
        long long int i;
        for (i = 1; i <= max; i++)
        {
            if(s[i]!=1)
            {
                flag = true;
                cout<<i;
                break;
            }
        }
        if(flag==false)
        {
            cout<<i;
        }
        cout<<endl;
    }
}