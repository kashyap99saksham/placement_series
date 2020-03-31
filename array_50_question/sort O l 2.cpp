#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;  cin>>t;
    while(t--)
    {
        int size;   cin>>size;
        vector <int> v;
        for (int i = 0; i < size; i++)
        {
            int val;    cin>>val;
            v.push_back(val);
        }
        sort(v.begin(),v.end());
        vector <int> :: iterator itr;
        for(auto itr : v)
            cout<<itr<<" ";
        cout<<endl;        
    }       
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;  cin>>t;
//     while(t--)
//     {
//         int size;   cin>>size;
//         unordered_map <int,int> m;
//         for (int i = 0; i < size; i++)
//         {
//             int val;    cin>>val;
//             m[val]++;
//         }
//         while(m[0]--)
//             cout<<0<<" ";
//         while(m[1]--)
//             cout<<1<<" ";
//         while(m[2]--)
//             cout<<2<<" ";    
//         cout<<endl;        
//     }       
// }