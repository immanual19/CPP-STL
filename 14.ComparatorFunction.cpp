//
//  main.cpp
//  ComparatorFunction
//
//  Created by A Emmanual Sarker on 19/11/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

//bool should_i_swap(int a,int b){
//    if(a<b){
//        return true;
//    }
//    return false;
//}

bool cmp(pair<int,int>a,pair<int,int>b){
    
    /*
     in case of inbuild function, if we need to swap, return false. Otherwise, false.
     */
    
    if(a.first!=b.first){
        if(a.first>b.first){
            return false;
        }
        return true;
    }
    else{
        if(a.second<b.second){
            return false;
        }
        return true;
    }
}

int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>>vect(n);
    for(int i=0;i<n;++i){
        cin>>vect[i].first>>vect[i].second;
    }
    
//    for(int i=0;i<n;++i){
//        for(int j=i+1;j<n;++j){
//            if(should_i_swap(vect[i], vect[j])){
//                swap(vect[i],vect[j]);
//            }
//        }
//    }
    sort(vect.begin(),vect.end(),cmp);
    cout<<"After sorting:"<<endl;
    for(int i=0;i<n;++i){
        cout<<vect[i].first<<" "<<vect[i].second<<endl;
    }
    cout<<endl;
    return 0;
                            
}
