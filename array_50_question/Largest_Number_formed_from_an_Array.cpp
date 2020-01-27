// PERFECT CODE IN O(N) BUT CANT ABLE TO STORE LARGE VALUES IN INT VARIABLE
// #include<bits/stdc++.h>
// #include<string>
// #include<math.h>
// using namespace std;
// long long int fun(long long int a,long long int b)
// {
//     long long int x,y;
//     x=a;y=b;
//     long long int rem=0;
//     while(x!=0)
//     {
//         ++rem;
//         x/=10;    
//     }
//     long long int val1=0,val2=0;
//     val1 = (b*pow(10,rem))+a;
//     rem=0;
//     while(y!=0)
//     { 
//         ++rem;
//         y/=10;
//     }
//     val2 = (a*pow(10,rem))+b;
//     return (val1>val2) ? val1 : val2;
// }
// void getmax(long long int arr[],long long int size)
// {
//     long long int v = arr[0];
//     for (long long int i = 1; i < size; i++)
//     {
//         v = fun(v,arr[i]);
//     }
//     cout<<v<<" ";    
// }
// int main()
// {
//     long long int test;
//     cin>>test;
//     while(test--)
//     {
//         long long int size;
//         cin>>size;
//         long long int arr[size];
//         for (long long int i = 0; i < size; i++)
//         {
//             cin>>arr[i];
//         }
//         getmax(arr,size);
//         cout<<endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
bool compare(string s1, string s2)
{
    return (stoi(s1+s2)>stoi(s2+s1));
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	vector<string> v(n,"");
    	for(int i=0;i<n;i++)
        {
    		cin>>v[i];
    	}   
    	sort(v.begin(), v.end(),compare);
    	for(int i=0;i<n;i++)
        {
    		cout<<v[i];
    	}
    	cout<<endl;
    }

    return 0;
}


