// #include<bits/stdc++.h>
// using namespace std;
// int find_subarray(int arr[],int size,int sum)
// {
//     // STORING ARRAY
//     for (int i = 0; i < size; i++)
//         cin>>arr[i];
//     int cur_sum = arr[0],start=0;
//     for (int i = 1; i <= size; i++)
//     {
//         while (cur_sum>sum && start<i-1)
//         { 
//             cur_sum-= arr[start];
//             start++;
//         }        
//         if(cur_sum==sum)
//         {
//             cout<<start<<"and"<<i-1;
//             return 0;
//         }
//         if(cur_sum<sum)
//             cur_sum = cur_sum+arr[i];
//     }    
// }
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int size,sum;
//         cin>>size>>sum;
// 	    int* arr = new int[size];
//         find_subarray(arr,size,sum);
               
//     }
// }



#include <iostream>
using namespace std;
using namespace std;
int main() 
{
    
    // std::ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // cout.tie(nullptr);
	int testCases;
	cin >> testCases;
	while (testCases --) 
    {
		int n, s;
		cin >> n >> s;

		int* arr = new int[n];

		for (int i = 0; i < n; i++) 
			cin >> arr[i];

		int start = 0;
		int end = 0;
		int sum = 0;

		bool found = false;

		sum = sum + arr[end];

		while (end < n) 
        {
			if (sum == s) 
            {
				cout << start + 1 << " " << end + 1 << endl;
				found = true;
				break;
			}
			else if (sum < s) 
            {
				sum = sum + arr[++ end];
			}
			else 
            {
				sum = sum - arr[start ++];
			}

		}

		if (sum > s) 
        {
			while (start != end) 
            {
				sum = sum - arr[start ++];
				if (sum == s) 
                {
					cout << start + 1 << " " << end + 1 << endl;
					found = true;
					break;
				}
				else if (sum < s) 
                {
					break;
				}
			}
		}

		if (found == false) {
			cout << -1 << endl;
		}


	}

}

