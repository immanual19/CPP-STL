//
//  main.cpp
//  Vectors
//
//  Created by A Emmanual Sarker on 31/8/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printVec(vector<int>v){
    cout<<"size: "<<v.size()<<endl;
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    vector<int>v(5,3);
    v.push_back(7);
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    printVec(v);
    v.pop_back();
    printVec(v);
    vector<int>&v1=v;
    v1.push_back(100);
    printVec(v);
    printVec(v1);
    return 0;
                            
}
