//
//  main.cpp
//  ProblemSolvingWithMultiset
//
//  Created by A Emmanual Sarker on 21/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    multiset<lld>s;
    int t;
    int n,k;
    lld x;
    cin>>t;
    while(t--){
        lld sum=0;
        cin>>n>>k;
        for(int i=0;i<n;++i){
            cin>>x;
            s.insert(x);
        }
        
        while(k--){
            auto it=(--s.end());
            lld candy=*it;
            sum+=candy;
            s.erase(it);
            s.insert((candy)/2);
        }
        cout<<sum<<endl;
        s.clear();
    }
    return 0;
                            
}
