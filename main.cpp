//
//  main.cpp
//  ProblemSolvingWithMap
//
//  Created by A Emmanual Sarker on 14/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

/*
 Given N strings, print unique strings in lexiographical
 order with their frequency
 N<=10^5
 |S|<=100
 */

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    map<string,int>m;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        //m[s]=m[s]+1;
        m[s]++;
    }
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
    return 0;
                            
}
