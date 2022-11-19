//
//  main.cpp
//  InbuiltSort
//
//  Created by A Emmanual Sarker on 19/11/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    
    
    /*
     quick sort
     heap sort
     insertion sort
     
     worst case: nlog(n)
     
     */
    sort(a.begin()+2,a.end());
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    return 0;
                            
}
