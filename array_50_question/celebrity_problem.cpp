int getId(int arr[MAX][MAX], int n)
{
    stack<int> s;
       for(int i =0; i <n; i++)
        s.push(i);
       int ans = -1;
       while(s.size() >1){
           int a = s.top();
           s.pop();
           int b = s.top(); 
           s.pop();
           if(arr[a][b] == 0)
            s.push(a);
           else
             s.push(b);
       }
       int x = s.top();
       s.pop();
       bool flag =true;
       
       for(int i =0; i<n; i++){
         if(i == x) continue;
         if(arr[x][i] == 1)    flag = false;
         if(arr[i][x] == 0)    flag = false;
       }
       
        if(!flag) return -1;
        return x;

}