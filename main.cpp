//
//  main.cpp
//  UnorderedSet
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printUnorderedSet(unordered_set<string> &s){
    for(auto &value:s){
        cout<<value<<endl;
    }
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    unordered_set<string>s;
    s.insert("abc"); //O(1)
    s.insert("xyz");
    s.insert("bac");
    s.insert("acb");
    s.insert("abc"); //Unordered set also stores only unique values. So, this insertion will have no effect
    auto it=s.find("abcd"); //O(1)
    if(it!=s.end()){
        s.erase(it);
    }
    printUnorderedSet(s);
    return 0;
                            
}
