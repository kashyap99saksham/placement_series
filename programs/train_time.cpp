#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int train;
        cin>>train;
        int twice = 2*train;
        int arr_time[train],dep_time[train],sort_time[twice];
        for (int i = 0; i < train; i++)
        {
            cin>>arr_time[i];
        }
        for (int i = 0; i < train; i++)
        {
            cin>>dep_time[i];
        }
        sort(arr_time,arr_time + train);
        sort(dep_time,dep_time + train);
        int i=0,k=0,j=0,counter=1;    
       
        
        while(i<train && j<train)
        {
            if(arr_time[i]<=dep_time[j])
            {
                sort_time[k++] = arr_time[i++];
                counter++;
            }
            else
            {
                sort_time[k++] = dep_time[j++];
                counter--;
            }
        }
      cout<<counter<<endl;  
    } 
}

// THIS CODE IS WORKING IN GEEKSFORGEEKS IDE

// #include<bits/stdc++.h>
// using namespace std;
// int func(int* a,int* b,int n){
//     int i=1;
//     int j=0;
//     int count=1;
//     while(i<n)
//     {
//         if(a[i]<=b[j])
//         {
//             count++;
//             i++;
//         }
//         else
//         {
//             i++;
//             j++;
//         }
//     }
//     return count;
// }
// int main()
//  {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	   int n;
// 	   cin>>n;
// 	   int* a=new int[n];
// 	   int* b=new int[n];
// 	   for(int i=0;i<n;i++){
// 	       cin>>a[i];
// 	   }
// 	   for(int i=0;i<n;i++){
// 	       cin>>b[i];
// 	   }
// 	   sort(a,a+n);
// 	   sort(b,b+n);
// 	   cout<<func(a,b,n)<<endl;;
// 	}
// 	return 0;
// }
