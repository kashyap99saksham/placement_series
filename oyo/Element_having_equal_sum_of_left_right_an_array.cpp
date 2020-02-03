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
        // TAKING EXTRA INDEX IN STARTING AND ENDING
        int arr[size+2];
        // PUT 0 FOR SAFE CASE
        arr[0]=0;
        arr[size+1]=0;

        // TAKING INPUT
        for(int i=1;i<=size;i++)
            cin>>arr[i];

        // CREATING LEFT SUM AND RIGHT SUM ARRAY
        int left_sum[size+1],right_sum[size+1];
        int sum=0;
        for(int i=0;i<=size+1;i++)
        {
            sum += arr[i];
            left_sum[i] = sum;
        }
        sum=0;
        for(int i=size+1;i>=0;i--)
        {
            sum += arr[i];
            right_sum[i] = sum;
        }
        // FINDING THAT ELEMENT HAVING LEFT EQUAL SUM AND RIGHT EQUAL SUM
        bool flag=false;
        for(int i=1;i<=size+1;i++)
        {
            if(left_sum[i-1]==right_sum[i+1])
            {
                flag=true;
                cout<<"YES";
                break;
            }    
        }
        if(flag==false)
            cout<<"NO";
        cout<<endl;
    }
}