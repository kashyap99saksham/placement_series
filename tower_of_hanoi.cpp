//https://www.youtube.com/watch?v=iluILbfzGKo
//Refer this for any doubt , Best Explaination ever for toh.
//If plates are n then total moves are always 2^n-1.
#include<bits/stdc++.h>
using namespace std;
void toh(int n,char source,char dest,char aux)
{
    if(n==1)
        cout<<source<<" "<<dest;
    toh(n-1,source,aux,dest);
    cout<<source<<" "<<dest;
    toh(n-1,aux,dest,source);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        toh(n,'1','3','2');
    }
    return 0;
}
