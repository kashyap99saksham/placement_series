#include<bits/stdc++.h>
// #include<array>
using namespace std;

int main()
{
    // STL HAVE THREE PARTS
        // CONTAINER | ALGORITHM | ITERATOR

    // ARRAY USING STL
    array <int,5> arr = {1,2,3,4,5};
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4];
        //METODS IN ARRAY
            // AT(),FRONT(),BACK(),FILL(N),SWAP(ARR2),SIZE(),BEGIN(),END() 
    // PAIR USING STL
        // pair is not part of container
        pair <string,int> p1,p2;
        p1 = make_pair("saksham",25);
        cout<<p1.first<<p1.second;
        p2 = make_pair("saksham",25);
        if(p1==p2){cout<<"true";}
    // TUPLE USING STL :
        // similar to pair, in this we can store multiple datatypes
        tuple <string,int,int> t1;
        t1 = make_tuple("saksham",25,20);
        cout<<get<0>(t1);
    // VECTOR
        // it supports dynamic array
        vector <int> v1;
        // how to initialize vector
        v1 = {1,2,3,4,5};
        cout<<v1[0];
        vector <int> v2(5,10);      //size = 5 and [10,10,10,10,10]
        // how to initialize vector after first initialize means dynamically
        v2.push_back(6);
        cout<<v2.back();
        // capacity shows the increased size, cant decrease after alloted
        //size tells how much elements are in array 
        // clear : removes all the elements from array

    // LIST USING STL
        //supports only sequentially 
        list <int> l1{1,2,3};
        // cout<<l1[0] WRONG:CANNOT BE ACCESSED LIKE THIS
        // access with help of iterator
        list <int>::iterator p = l1.begin();
        while(p!=l1.end())
        {
            cout<<"list element"<<*p;
            p++;
        }
        //USEFULL FUNCTION ARE: SORT , SIZE, PUSH_BACK,PUSH_FRONT,POP,REVERSE,REMOVE,CLEAR;
    
    // MAP USING STL
        cout<<endl<<"I M FROM MAP"<<endl;
        // used to implement associative arrays
        map <int,string> customer;
        customer[0] = "saksham";
        customer[1] = "kashyap";
        customer[2] = "kumar";
        // acess
        cout<<customer[0];
        // or using iterator
        map<int,string>::iterator q = customer.begin();
        while(q!=customer.end())
        {
            cout<<q->first;
            cout<<q->second;
            q++;
        }
    //STRING USING STL
        cout<<endl<<"I m FRom STRING"<<endl;
        string s1;
        s1 = "hello";
        cout<<s1;    
}