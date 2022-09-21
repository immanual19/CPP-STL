#include <bits/stdc++.h>
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n;
		set<string>s;
		cin>>n;
		while(n--){
			string str;
			cin>>str;
			s.insert(str);
		}
		for(auto &value:s){
			cout<<value<<endl;
		}
		s.clear();
	}

	return 0;
}
