#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int n;
	cin>>n;
	multiset<pair<int,string>>ms;
	while(n--){
	    int marks;
	    string name;
	    cin>>name>>marks;
	    marks=-1*marks;
	    ms.insert({marks,name});
	}
	for(auto value:ms){
	    cout<<value.second<<" "<<-1*value.first<<endl;
	}
	return 0;
}
