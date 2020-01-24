// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin>>test;
//     while(test--)
//     {
//         int size;
//         cin>>size;
//         // int *arr = new int[size];
//         vector <int> v;
//         for (int i = 0; i < size; i++)
//             cin>>v[i];
//         map<int,int> m;
//         for (int i = 0; i < size; i++)
//         {   
//             if (m.find(v[i]) != m.end()) 
//             {
//                 m[v[i]] = m[v[i]]+1;
//             } 
//             else 
//             {
//                 m[v[i]] = 0;
//             }
//         }
//         cout<<m[3];
// 	}
//         cout<<endl;
// }


// NOT RUNNING IN G4G IDE
/* C++ program for finding out majority 
element in an array */
#include <bits/stdc++.h> 
using namespace std; 

void findMajority(int arr[], int size) 
{ 
	unordered_map<int, int> m; 
	for(int i = 0; i < size; i++) 
		m[arr[i]]++; 
	int count = 0; 
	for(auto i : m) 		//ITERATE MAP IN I
	{ 
		if(i.second > size / 2) 
		{ 
			count =1; 
			cout<< i.first<<endl; 
			break; 
		} 
	} 
	if(count == 0) 
		cout << -1 << endl; 
} 

// Driver code 
int main() 
{ 
   int test;
    cin>>test;
    while(test--)
    {
        int size;
        cin>>size;
        int *arr = new int[size];
        // vector <int> v;
        int val;
        for (int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }

	    findMajority(arr, size);
    }
	return 0; 
} 
