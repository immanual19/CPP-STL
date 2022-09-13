//
//  main.cpp
//  Iterators
//
//  Created by A Emmanual Sarker on 13/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    vector<int> v={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //.begin() iterator points toward the first element. Here for example 2.
    //.end() iterator points toward the next of last element. Here for example the element after 7.
    vector<int>::iterator it=v.end();
    cout<<*(it-1)<<endl;

    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
    
    //it++ moves to next iterator. This is used if the memory location is non-contagious
    //it+1 moves to next location. This can cause problem if the memory location is non-contagious
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it1;
    for(it1=v_p.begin();it1!=v_p.end();++it1){
        //cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<it1->first<<" "<<it1->second<<endl;
        //(*it).first can be replaced with it->first
    }
    return 0;
                            
}
