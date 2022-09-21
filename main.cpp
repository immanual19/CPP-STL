//
//  main.cpp
//  ProblemSolvingWithUnorderedSet
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;
/*
 Given N strings and Q queries.
 In each query you are given a string
 print yes if string is presented
 else print no
 
 N<=10^6
 |S| <= 100
 
 Q<=10^6
 
 */

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    unordered_set<string>s;
    /*
     Can not use complex data type inside unordered_set
     */
    int n,q;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    cin>>q;
    while(q--){
        string str1;
        cin>>str1;
//        auto it=s.find(str1);
//        if(it!=s.end()){
//            cout<<"Yes"<<endl;
//        }
//        else{
//            cout<<"No"<<endl;
//        }
        if(s.find(str1)==s.end()){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
                            
}
