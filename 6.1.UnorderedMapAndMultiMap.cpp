//
//  main.cpp
//  UnorderedMapAndMultiMap
//
//  Created by A Emmanual Sarker on 14/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printUnorderedMap(unordered_map<int, string>&m){
    cout<<"Size: "<<m.size()<<endl;
    for(auto &ptr:m){
        cout<<ptr.first<<" "<<ptr.second<<endl;
    }
}
int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    /*
     1. inbuilt implementation
     2. time complexity
     3. valid keys datatype
     3-> Example: Pair can not be inserted in (as) unordered_map but
     can be inserted in ordered_map
     */
    unordered_map<int, string>m;
    m[1]="abc"; // O(1) time complexity
    m[5]="cdc";
    m[3]="acd";
    m[6]="a";
    m[5]="cde";
    auto it=m.find(7); // O(log(1))
    if(it!=m.end()){
        m.erase(it); // O(log(1))
    }
    printUnorderedMap(m);
    return 0;
                            
}
