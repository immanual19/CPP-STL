//
//  main.cpp
//  ProblemSolvingInNestedSTL
//
//  Created by A Emmanual Sarker on 16/11/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    map<int,multiset<string>> marks_map;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        int marks;
        string name;
        cin>>name>>marks;
        marks_map[marks].insert(name);
    }
    auto current_it=--marks_map.end();
    while(true){
        auto &students=(*current_it).second;
        int marks=(*current_it).first;
        for(auto student:students){
            cout<<student<<" "<<marks<<endl;
        }
        if(current_it==marks_map.begin()){
            break;
        }
        current_it--;
    }
    return 0;
                            
}
