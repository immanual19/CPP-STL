//
//  main.cpp
//  Set
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printSet(set<string>&s){
    //printing a set with range-based loop
    for(auto &value:s){
        cout<<value<<endl;
    }
    //printing a
//    for(auto it=s.begin();it!=s.end();++it){
//        cout<<(*it)<<endl;
//    }
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    /*
     1. Set
     2. UnorderedSet
     3. MultiSet
     */
    set<string> s;
    /*
     Inserting values in set
     */
    s.insert("xyz"); // In set, values are stored in ascending order
    s.insert("abc"); //Time complexity O(log(n))
    s.insert("acb");
    s.insert("bac");
    s.insert("abc"); // Set takes unique elements so this "abc" string will be ignored
    auto it = s.find("abc");
    if(it!=s.end()){
       cout<<(*it)<<endl;
        //s.erase(it);
    }
    else{
        cout<<"value not found"<<endl;
    }
    //s.erase("acb");
    printSet(s);
    return 0;
                            
}
