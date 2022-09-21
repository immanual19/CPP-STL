#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<long long int> s;
    int q,y;
    long long int x;
    cin>>q;
    while(q--){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else if(y==3){
            if(s.find(x)==s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
        else{
            
        }
    }
    return 0;
}
