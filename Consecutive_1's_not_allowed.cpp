#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        long long mod = pow(10,9)+7;
        long long int a=1,b=1,c;
        while(n--)
        {
            c = (a+b)%mod;
            a = b;
            b = c;
            if(n==0)
                cout<<c%mod;
        }
}
        cout<<endl;
    }
}