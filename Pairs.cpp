//
//  main.cpp
//  Pairs
//
//  Created by A Emmanual Sarker on 31/8/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    pair<int,string> p1,p2;
    p1=make_pair(2, "ABC");
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    p2={3,"abcd"};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;
    pair<int,string>&p3=p2;
    p3.first=10;
    cout<<p3.first<<endl;
    cout<<p3.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0], p_array[2]);
    pair<int,string>p4;
    cin>>p4.first>>p4.second;
    cout<<p4.first<<" "<<p4.second<<endl;
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;
                            
}
