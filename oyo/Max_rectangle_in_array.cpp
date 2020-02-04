#include<bits/stdc++.h>
using namespace std;
long long int getMaxArea(long long int hist[],long long int n) 
{ 
    // Create an empty stack. The stack holds indexes  
    // of hist[] array. The bars stored in stack are  
    // always in increasing order of their heights. 
    stack<int> s; 
  
    long long int max_area = 0; // Initialize max area 
    long long int tp;  // To store top of stack 
    long long int area_with_top; // To store area with top bar 
                       // as the smallest bar 
  
    // Run through all bars of given histogram 
    long long int i = 0; 
    while (i < n) 
    { 
        // If this bar is higher than the bar on top  
        // stack, push it to stack 
        if (s.empty() || hist[s.top()] <= hist[i]) 
            s.push(i++); 
  
        // If this bar is lower than top of stack,  
        // then calculate area of rectangle with stack  
        // top as the smallest (or minimum height) bar.  
        // 'i' is 'right index' for the top and element  
        // before top in stack is 'left index' 
        else
        { 
            tp = s.top();  // store the top index 
            s.pop();  // pop the top 
  
            // Calculate the area with hist[tp] stack  
            // as smallest bar 
            area_with_top = hist[tp] * (s.empty() ? i :  
                                   i - s.top() - 1); 
  
            // update max area, if needed 
            if (max_area < area_with_top) 
                max_area = area_with_top; 
        } 
    } 
  
    // Now pop the remaining bars from stack and calculate 
    // area with every popped bar as the smallest bar 
    while (s.empty() == false) 
    { 
        tp = s.top(); 
        s.pop(); 
        area_with_top = hist[tp] * (s.empty() ? i :  
                                i - s.top() - 1); 
  
        if (max_area < area_with_top) 
            max_area = area_with_top; 
    } 
  
    return max_area; 
} 
int maxRectangle(int arr[][],int size)
{
    int brr[size];
    int z=0;
    for (int j = 0; j < size; j++)
    {
        brr[z++]=arr[0][j];
    }
    int maxi = INT_MIN;
    maxi = max(maxi,magetMaxArea(brr,size));

    for(int i=1;i<size;i++)
    {
        z=0;
        for (int j = 0; j < size; j++)
        {
            brr[z]=arr[i][j];
            brr[z]++;
            z++;
        }
        getMaxArea(brr,size);
    }
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long int row,col;
        cin>>row>>col;
        long long int arr[row][col];
        for (long long int  i = 0; i < row; i++)
            for (long long int j = 0; i < col; j++)
                cin>>arr[row][col];

        cout<<maxRectangle(arr,row,col);
        cout<<endl;
    }
}