#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==1||n==2)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fibo(n);
        cout<<endl;
    }
    return 0;
}

//using memoization version of dynamic programming.....

#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    a[1]=a[2]=1;
	    for(int i=3;i<=n;i++)
	    {
	        a[i]=(a[i-1]+a[i-2])%1000000007;                //VERY GOOD AND IMPORTANT APROACH
	    }
	    cout<<a[n]<<endl;
	}
	return 0;
}
