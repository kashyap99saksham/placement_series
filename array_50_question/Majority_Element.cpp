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
        // int *arr = new int[size];
        vector <int> v;
        for (int i = 0; i < size; i++)
            cin>>v[i];
        map<int,int> m;
        for (int i = 0; i < size; i++)
        {   
            if (m.find(v[i]) != m.end()) 
            {
                m[v[i]] = m[v[i]]+1;
            } 
            else 
            {
                m[v[i]] = 0;
            }
        }
        cout<<m[3];
	}
        cout<<endl;
}