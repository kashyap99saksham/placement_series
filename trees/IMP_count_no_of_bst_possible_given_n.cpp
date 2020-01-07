// USING FORMULA IN O(n)
//MOST IMPORTANT QUESTION, REFER FOR ANY DOUBT GEEKSFORGEEKS
#include <boost/multiprecision/cpp_int.hpp> 
using namespace boost::multiprecision; 
#include <bits/stdc++.h>
using namespace std;
int256_t find(int a,int b)
{
    int256_t t1=1;
    if(a-b < b)
        b = a-b;
    for(int i=0;i<b;i++)
    {
        t1 = t1*(a-i);
        t1 = t1/(i+1);
    } 
    return t1;
}   
int main()
{
    // formula is 2nCn/n+1
    int x;
    cin>>x;
    while (x--)
    {
        int val;
        cin>>val;
        int256_t n = find(2*val,val);
        cout<<n/(val+1);
        cout<<endl;   
    }
}
// USING Dynamic programming BUT time complexity is o(n^2)
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// 	int x;
// 	cin>>x;
// 	while(x)
// 	{
//         int256_t val;
// 	    cin>>val;
// 	    int cat[val];
// 	    cat[0]=cat[1]=1;
// 	    for(int i = 2;i<val;i++)
// 	    {
// 	        for(int j = 0;j<i;j++)
// 	        {
//                 cat[i]+=cat[j]*cat[i-j-1];
// 	        }
// 	    }
// 	    cout<<cat[val];
// 	    cout<<endl;
// 	}
// 	return 0;
// }
