//
//  main.cpp
//  ProblemSolvingWithSet
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;
/*
 Given N strings, print unique strings
 in lexiographical order
 N<=10^5
 |S| <= 100000
 */

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    set<string> s;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    cout<<"Unique Strings: "<<endl;
    for(auto &value:s){
        
        cout<<value<<endl;
    }
    return 0;
                            
}
