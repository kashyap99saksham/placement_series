// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int size;
//         cin>>size;
//         int arr[size],brr[size];

//         // TAKING BOTH ARRAY
//         for(int i=0;i<size;i++)
//             cin>>arr[i];
//         for(int i=0;i<size;i++)
//             cin>>brr[i];
        
//         // SORTING
//         bool flag = true;
//         sort(arr,arr+size);     //O(nlogn)
//         sort(brr,brr+size);
//         for (int i = 0; i < size; i++)
//         {
//             if(arr[i]!=brr[i])
//             {
//                 flag = false;
//                 cout<<0;
//                 break;
//             }
//         }
//         if(flag==true)
//             cout<<1;
                
//         cout<<endl;
//     }

// }


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
        unordered_map <int,int> m1;
        // TAKING BOTH ARRAY
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<size;i++)
        {
            int v;  cin>>v;
            m1[v]++;
        }
        for(int i=0;i<size;i++)
        {
            if(m1.find(arr[i])!=m1.end())
            {
                m1[arr[i]]--;
            }
        }
        bool flag = true;
        for(auto i:m1)
        {
            if(i.second!=0)
            {
                flag = false;
                cout<<0;
                break;
            }
        }
        if(flag==true)
            cout<<1;
    }
}
