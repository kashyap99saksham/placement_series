#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        map<char,int> s;
        //  ! # $ % & * @ ^ ~ 
        s['!']=0;s['^']=0;s['@']=0;s['*']=0;s['&']=0;s['%']=0;s['$']=0;s['#']=0;s['~']=0;
        int size;
        cin>>size;
        string s1;
        for (int i = 0; i < size; i++)
            cin>>s1[i];
        unordered_set<char> st;
        for (int i = 0; i < size; i++)
        {
            char c; cin>>c;
            st.insert(c);
        }

        for(int i=0;i<size;i++)
        {
            if(st.find(s1[i])!=st.end())
            {
                // cout<<s1[i];
                s[s1[i]] = 1;
            }
        }
        // for(auto i : s)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        for(auto i : s)
        {
            if(i.second==1)
            {
                cout<<i.first<<" ";
            }
        }cout<<endl;
        for(auto i : s)
        {
            if(i.second==1)
            {
                cout<<i.first<<" ";
            }
        }
        cout<<endl;
                 
    }
}