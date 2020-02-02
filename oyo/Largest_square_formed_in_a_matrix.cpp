#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int row,col,max=0;    cin>>row>>col;
        int arr[row][col],brr[row][col];

        // TAKING MATRIX
        for (int i = 0; i < row; i++){
            for (int j = 0; j < col; j++)
                cin>>arr[i][j];
        }
        // PUTTING SAME VALUES IN 1ST ROW AND 1ST COLOUMN
        for(int i=0;i<col;i++)
            brr[0][i] = arr[0][i];
        for(int i=0;i<row;i++)
            brr[i][0]= arr[i][0];
        
        // PUTTING REMAINING VALUES IN NEW ARRAY
        for(int i=1;i<row;i++){
            for (int j = 1; j < col; j++){
                if(arr[i][j]==0)
                    brr[i][j] = 0;
                else{
                    int new_val = min(brr[i-1][j],min(brr[i][j-1],brr[i-1][j-1])) + 1;
                    brr[i][j] = new_val;
                }
            }
        }
        // CHECKING
        for(int i=0;i<row;i++){
            for (int j = 0; j < col; j++)
                if(brr[i][j]>max)
                    max = brr[i][j];
        }
        cout<<max<<endl;
    }
}
