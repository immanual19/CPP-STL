//
//  main.cpp
//  HowToWriteIteratorsCodeInShort
//
//  Created by A Emmanual Sarker on 14/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    vector<int>v={2,3,5,6,7};
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();++it){
        cout<<*it<<endl;
    }
    //This is the example. For C++ version 11 and up
    for(int &value: v){ //Here, first 2 comes into value. Then, 3. Then, 5 and so on.
        // Here "values" are copied into value
        //For accessing exact value pass it as reference
        cout<<value<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    //This is called ranged-based loop
    for(pair<int,int> &value: v_p){
        cout<<value.first<<" "<<value.second<<endl;
    }
    
    // auto keyword dynamically assumes data type
    
    auto a=1.9;
    cout<<a<<endl;
    for(auto it=v_p.begin();it!=v_p.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<endl;
    for(auto &value:v_p){
        cout<<value->first<<" "<<value->second<<endl;
    }
    cout<<"End of Code"<<endl;
    return 0;
                            
}
