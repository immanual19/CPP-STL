//
//  main.cpp
//  Maps
//
//  Created by A Emmanual Sarker on 14/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h> // including all the header files of c++
                            

typedef long long int lld; // shortcut of long long int
using namespace std;

void printMap(map<int,string> &m){ //function to print a map. Value is passing by reference
    cout<<"Size: "<<m.size()<<endl;
    for(auto &pr:m){ // range-based loop
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    // map and unordered map
    // one key, one value is stored in map
    // keys are unique
    // For example, an integer key and a string value
    //Inserting and accessing time complexity O(nlog(n))
    /*
     1 abc
     5 cde
     3 acd
     
     The value will be sorted in map.
     But, in unordered map, the value will be unsorted.
     it++ can be done but not it+1 because it++ points to next iterator
     but it+1 points to next memory location. As map doesn't use contiguous
     memory location, it+1 might point to a location where no value of that
     map exists.
     */
    
    map<int,string> m; // declaring a map
    //inserting map
    m[1]="abc"; // O(log(n)), here n is current size of map
    m[5]="cdc";
    m[3]="acd";
    m[6]="a"; //this alone can consume O(log(n)) time
    m[5]="mlha";
    m[10]="abcd"; //s.size() * O(log(n)) s.size is length "abcde"
    //inserting value to map
    m.insert({4,"ban"});
    map<int,string>::iterator it; // declaring an iterator
    for(it=m.begin();it!=m.end();++it){
        //printing value of a map
        cout<<(*it).first<<" "<<(*it).second<<endl;
        //another way to print value of a map
        cout<<it->first<<" "<<it->second<<endl;
    }
    auto it1=m.find(9); //returns a iterator O(log(n))
    if(it1==m.end()){
        cout<<"No value"<<endl;
    }
    else{
        cout<<it1->first<<" "<<it1->second<<endl;
    }
    if(it1!=m.end()){
        m.erase(it1); //O(log(n))
    }
    
    printMap(m);
    m.clear();
    return 0;
                            
}
