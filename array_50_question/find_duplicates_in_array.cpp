#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;   cin>>test;
    while(test--){
        bool flag = false;
        int size;   cin>>size;
        unordered_map <int,int> m;
        for(int i =0;i<size;i++){
            int val;
            cin>>val;
            m[val]++;
            if(m[val]==2){
                flag = true;
                cout<<val<<" ";
            }
        }
        if(flag ==false)
            cout<<-1;
    }
}
