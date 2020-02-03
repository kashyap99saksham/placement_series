#include<bits/stdc++.h>
using namespace std;
void find_no(int arr[],int size)
{

    int d1 = INT_MIN,start=0;
    int i=size-1;
    // FINDING D1 : START FROM RIGHT TO LEFT AND CHECK NUMBERS ARE IN ACCENDING ORDER AND IF NUMBER FOUND WHICH IS NOT FOLLOW ACCESSENDING ORDER
    // THEN MAKE THAT NO. AS D1
    while(arr[i]<arr[i-1])
        i--;
    d1 = arr[i-1];    
    // cout<<d1;   
    // NOW FIND OUT D2: START FROM D1'S POSITION AND GO TO RIGHT FIND JUST GREATER NO. OF D1 
    int j = i; 
    while(j<size&&d1<arr[j])
        j++;
    int d2 = arr[j-1];
    // NOW SWAP D1 AND D2
    arr[j-1] = d1;
    arr[i-1] = d2;
    // NOW SORT THE THE FROM D1'S ORIGINAL POSITION TO END OF ARRAY 
    int brr[size-i];
    for(int z=i;z<size;z++)
        brr[start++] = arr[z];

    int new_size = sizeof(brr)/sizeof(brr[0]);
    sort(brr,brr+new_size);

    // FILL BACK THE SORTED ARRAY PART INTO ORIGINAL ARRAY
    for(int k=0;k<new_size;k++)
        arr[i++] = brr[k];
    // PRINT ORIGINAL ARRAY
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size;
        cin>>size;
        int arr[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        find_no(arr,size);
        cout<<endl;
    }
}