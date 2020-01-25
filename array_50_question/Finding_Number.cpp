#include<bits/stdc++.h>
using namespace std;
// TIME COMPLEXITY O(LOGN) : USING BINARY SEARCH
int search_element(int arr[],int start,int end,int element)
{
    if(start>end)
    {return -1;}
    int mid = (start+end)/2;
    if(element==arr[mid]){  return mid;   }
    if(element<arr[mid]){
        return search_element(arr,start,mid-1,element); 
    }
    else return search_element(arr,mid+1,end,element);

}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,element;
        cin>>size;
        int arr[1000000];
        for(int i=0;i<size;i++) {
            cin>>arr[i];   
        }
        cin>>element;
        int ans = search_element(arr,0,size-1,element);
        cout<<ans;
        cout<<endl;
    }
    return 0;
}
    


// TIME COMPLEXITY O(1) : USING HASHING
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         long long int size,val,c=0,element;
//         cin>>size;
//         unordered_map<int,int> m;
//         for (int i = 0; i < size; i++){     cin>>val;   m[val]=++c;     }
//         cin>>element;   
//         int index = m[element];
//         if(index!=0){   cout<<index-1;   }
//         else    cout<<-1;
//         cout<<endl;
//     }
// }


// TIME COMPLEXITY O(n) : USING LINEAR SEARCH
// int main(){
//     int test;
//     cin>>test;
//     while(test--){
//         int size,val,c=0,element;
//         cin>>size;
//         vector <int> v;
//         for (int i = 0; i < size; i++){ cin>>val; v.push_back(val); }
//         cin>>element;
//         for(auto i : v){
//             if(i==element){
//                 cout<<c;return 0;}
//             c++;
//         }
//         if(c==size)    cout<<-1;
//         cout<<endl;
//     }
// }