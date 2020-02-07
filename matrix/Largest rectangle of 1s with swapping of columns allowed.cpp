// C++ program to find largest rectangle with all 1s 
// in a binary matrix 
#include<bits/stdc++.h> 
using namespace std; 
int main() 
{   
    int test;
    cin>>test;
    while(test--)
    {
        int R,C;
        cin>>R>>C;
        bool mat[R][C];
        for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cin>>mat[i][j];
            }
        }
        // An auxiliary array to store count of consecutive 1's 
        // in every column. 
        int hist[R + 1][C + 1]; 
    
        // Step 1: Fill the auxiliary array hist[][] 
        for (int i = 0; i < C; i++) { 
            // First row in hist[][] is copy of first row in mat[][] 
            hist[0][i] = mat[0][i]; 
    
            // Fill remaining rows of hist[][] 
            for (int j = 1; j < R; j++) 
                hist[j][i] = (mat[j][i] == 0) ? 0 : hist[j - 1][i] + 1; 
        } 
    
        // Step 2: Sort columns of hist[][] in non-increasing order 
        for (int i = 0; i < R; i++) { 
            int count[R + 1] = { 0 }; 
    
            // counting occurrence 
            for (int j = 0; j < C; j++) 
                count[hist[i][j]]++; 
    
            // Traverse the count array from right side 
            int col_no = 0; 
            for (int j = R; j >= 0; j--) { 
                if (count[j] > 0) { 
                    for (int k = 0; k < count[j]; k++) { 
                        hist[i][col_no] = j; 
                        col_no++; 
                    } 
                } 
            } 
        } 
    
        // Step 3: Traverse the sorted hist[][] to find maximum area 
        int curr_area, max_area = 0; 
        for (int i = 0; i < R; i++) { 
            for (int j = 0; j < C; j++) { 
                // Since values are in decreasing order, 
                // The area ending with cell (i, j) can 
                // be obtained by multiplying column number 
                // with value of hist[i][j] 
                curr_area = (j + 1) * hist[i][j]; 
                if (curr_area > max_area) 
                    max_area = curr_area; 
            } 
        } 
        cout<<max_area<<endl;
    }
	return 0; 
} 
