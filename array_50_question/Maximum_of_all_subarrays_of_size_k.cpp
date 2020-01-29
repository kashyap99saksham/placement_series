#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int size,k;   cin>>size>>k;
        int arr[size];
        for(int i=0;i<size;i++)
            cin>>arr[i];
        deque<int> Qi(k);

        int i; 
        for (i = 0; i < k; ++i) 
        { 
            // For every element, the previous smaller elements are useless so 
            // remove them from Qi 
            while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
                Qi.pop_back(); // Remove from rear 
    
            // Add new element at rear of queue 
            Qi.push_back(i); 
        } 

        // Process rest of the elements, i.e., from arr[k] to arr[n-1] 
        for (; i < size; ++i) 
        { 
            // The element at the front of the queue is the largest element of 
            // previous window, so print it 
            cout << arr[Qi.front()] << " "; 
    
            // Remove the elements which are out of this window 
            while ((!Qi.empty()) && Qi.front() <= i - k) 
                Qi.pop_front(); // Remove from front of queue 
    
            // Remove all elements smaller than the currently 
            // being added element (remove useless elements) 
            while ((!Qi.empty()) && arr[i] >= arr[Qi.back()]) 
                Qi.pop_back(); 
    
            // Add current element at the rear of Qi 
            Qi.push_back(i); 
        } 
    
        // Print the maximum element of last window 
        cout << arr[Qi.front()];
        cout<<endl; 
    } 
}