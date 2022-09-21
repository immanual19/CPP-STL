//
//  main.cpp
//  MultiSet
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printMultiset(multiset<string> &s){
    for(auto &value:s){
        cout<<value<<endl;
    }
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    multiset<string>s;
    /*
     Multiset can take duplicate value and the values are stored in ascending order
     */
    s.insert("abc"); //O(log(n))
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    s.insert("abc");
    printMultiset(s);
    auto it=s.find("abc"); //returns the iterator of first "abc"
    if(it!=s.end()){
        s.erase(it); //O(log(n))
    }
    s.erase("abc"); //deletes all the string "abc"
    printMultiset(s);
    return 0;
                            
}
