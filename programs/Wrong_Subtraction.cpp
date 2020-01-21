#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int n=a;
    while(b--)
    {
        int rem = a%10;
        if(rem!=0)
        {
            n-=1;
        }
        else
        {
            n/=10;
        }
        a = n;
    }
    cout<<a;
    
}
