// #include<bits/stdc++.h>
// using namespace std;
// // TIME COMPLEXITY O(LOGN) : USING BINARY SEARCH
// int search_element(int arr[],int start,int end,int element)
// {
//     if(start>end)
//     {return -1;}
//     int mid = (start+end)/2;
//     if(element==arr[mid]){  return mid;   }
//     if(element<arr[mid]){
//         return search_element(arr,start,mid-1,element); 
//     }
//     else return search_element(arr,mid+1,end,element);

// }
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int size,element;
//         cin>>size;
//         int arr[size];
//         for(int i=0;i<size;i++) 
//         {
//             cin>>arr[i];   
//         }
//         cin>>element;
//         int temp=arr[0],deflation_point;
//         for(int i=1;i<size;i++)
//         {
//             if(arr[i]<temp)
//             {
//                 deflation_point = i-1;
//             }
//             temp=arr[i];
//         }
//         // cout<<deflation_point;
//         int ans = search_element(arr,0,deflation_point-1,element);
//         if(ans==-1)
//         {
//             ans = search_element(arr,deflation_point,size-1,element);
//         }
//         cout<<ans;
//         cout<<endl;
//     }
//     return 0;
// }
    



// IN LINEAR TIME O(N)
#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(t--)
	{
	    long int N;
	    cin>>N;
	    long int A[N];
	    for(long int j=0;j<N;j++)
	        cin>>A[j];
	    long int X;
	    cin>>X;
	    int count=0;
	    for(long int j=0;j<N;j++)
	    {
	        if(A[j]==X)
	            {
	                cout<<j<<"\n";
	                count++;
	                break;
	            }
	    }
	    if(count==0)
	        cout<<"-1\n";
    }
	return 0;
}