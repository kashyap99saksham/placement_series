#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,sum,val;
        cin>>size>>sum;
        vector <int> v;
        for (int i = 0; i < size; i++)
        {
            cin>>val;
            v.push_back(val);   
        }
        unordered_set<int> set1;
        bool check = false;
        for(auto i : v)
        {
            if(i<sum)
            {
                int dif = sum-i;
                if(set1.find(dif)!=set1.end())
                {
                    check = true;
                    cout<<"Yes";
                    break;
                }
                else
                    set1.insert(i);
            }
        }
        if(check==false)
            cout<<"No";
        cout<<endl;
    }
}
