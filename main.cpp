//
//  main.cpp
//  NestingInVector
//
//  Created by A Emmanual Sarker on 13/9/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;

void printVec(vector<pair<int,int>> &v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        //Accessing element of vector of pair
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
void printVec1(vector<int>&v){
    cout<<"Size: "<<v.size()<<endl;
    for(int i=0;i<v.size();++i){
        //Accessing element of each vectors from N numbers of vectors
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    vector<pair<int,int>>v1={{1,2},{2,3},{3,4}}; //Declaring and initializing a vector of pair
    printVec(v1);
    vector<pair<int,int>>v2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v2.push_back({x,y}); //making pair and pushing the pair inside vector
    }
    printVec(v2);
    /*
     Suppose a scenario. We need 5 vectors and their sizes are 10,34,11,21,50
     Then the below code comes handy.
     */
    int N;
    cin>>N;
    vector<int>va[N]; //Creating 10 vectors or more like array of vector with size N.

    for(int i=0;i<N;++i){ //This Loop will run till the number of vectors
        int n;
        cin>>n; //getting size of every vector
        for(int j=0;j<n;++j){ //This Loop will run till the size of individual vector
            int x;
            cin>>x;
            va[i].push_back(x); // filling an individual vector with n numbers
        }
    }
    for(int i=0;i<N;++i){
        printVec1(va[i]); //printing every vector
    }
    cout<<va[0][0]<<endl; //Proof that this is one kind of 2D array
    /*
     Now, suppose a scenario where we don't know
     */
    vector<vector<int>>vv; // declaring vector of vector
    int M;
    cin>>M;
    for(int i=0;i<M;++i){
        int n;
        cin>>n;
        //vector<int>temp; //creating a temporary vector because ith vector doesn't exist. But to solve this problem
        vv.push_back(vector<int>()); //Now we have created an ith vector already before giving it value
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            vv[i].push_back(x); //Now we have ith vector. So, there is no need of temp vector
            //temp.push_back(x); //filling temporary vector with value of x for n times
        }
        //vv.push_back(temp); //pushing back temp vector into vector of vector called vv
    }
    vv[0].push_back(10);
    vv.push_back(vector<int>());
    for(int i=0;i<vv.size();++i){
        printVec1(vv[i]);
    }
    
    return 0;
                            
}
