// O(n) TIME COMPLEXITY
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,val;
        cin>>size;
        int arr[size+1]={ 0 };
        for (int i = 0; i < size; i++)
        {
            cin>>val;
            arr[val]++;  
        }
        int repeat,not_come;
        for (int i = 1; i <= size; i++)
        {
            if(arr[i]>1)
                repeat = i;
            if(arr[i]<1)
                not_come = i;
        }        
        cout<<repeat<<" "<<not_come<<endl;
    }
}

// MORE TIME COMPLEXITY
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;   cin>>test;
//     while(test--)
//     {
//         long long int size,val;   cin>>size;
//         unordered_map <int,int> m;
//         int count=0;
//         for(int i=0;i<size;i++){
//             cin>>val;
//             if(m.find(val)!=m.end())
//                 m[val]+=1;
//             else
//                 m[val] = 1;
//         }
//         int more,no;
//         for(int i=1;i<=size;i++)
//         {
//             if(m[i]>1)
//                 more = i;
//             if(m[i]==0)
//                 no = i;
//         }
//         cout<<more<<" "<<no<<endl;
//     }
// }