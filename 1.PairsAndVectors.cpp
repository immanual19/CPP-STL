//
//  main.cpp
//  PairsAndVectors
//
//  Created by A Emmanual Sarker on 13/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;
//function is getting a copy which is O(n) operation
// for that we can pass as reference add & before parameter name
void printVec(vector<int>&v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    v.push_back(2);
    cout<<endl;
}

void printVecStr(vector<string>&vstr){
    for(int i=0;i<vstr.size();++i){
        cout<<vstr[i]<<" ";
    }
    cout<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    pair<int,string> p1,p2; //Declaring a pair
    p1=make_pair(2,"abc"); //initializing a pair
    p2={2,"def"}; //initializing a pair
    //pair<int,string> p3=p1; //copying a pair into another pair (changing in p3 will have no effect on p1)
    pair<int,string> &p3=p1; //passing a pair into another pair as reference (changing p3 will also change p1)
    p3.first=16055;
    p3.second="Immanual Sarker";
    //accessing value of pair
    cout<<p1.first<<" "<<p1.second<<endl;
    cout<<p2.first<<" "<<p2.second<<endl;
    cout<<p3.first<<" "<<p3.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int> p_array[3]; //declaring an array of pair
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]); //buildin function
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl; //accessing an array of pair
    }
    /*for OJ, size limit is
    for local declaration, 10^5
    for global declaration, 10^7
    */
    vector<int> v; //declaring a vector
    vector<pair<int,string>>vp; //declaring a pair of vector
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        printVec(v);
        v.push_back(x);
    }
    
    printVec(v);
    vector<int>vs(10); //declaring vector with a size 10
    vector<int>vs1(10,3); //declaring a vector with size 10 and filling every position with 3
    vs.push_back(7); //In that case, first 10 element will be zero. The 11th element will be 7.
    vs1.push_back(44); //O(1) time complexity
    printVec(vs);
    printVec(vs1);
    vs1.pop_back(); //O(1) time complexity
    printVec(vs1);
    vector<int>&vc=vs1; // O(n) time complexity
    printVec(vc); //printVec function is receiving a copy of vc vector
    vc.pop_back();
    printVec(vs1);
    
    vector<string>vstring;
    int size;
    cin>>size;
    for(int i=0;i<size;++i){
        string s;
        cin>>s;
        vstring.push_back(s);
    }
    printVecStr(vstring);
    return 0;
                            
}
