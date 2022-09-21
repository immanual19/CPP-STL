#include <bits/stdc++.h>
typedef long long int lld;
using namespace std;
int main() {
	
	int t;
	cin>>t;
	while(t--){
		int n,m,total_loop;
		lld x;
		cin>>n>>m;
		multiset<lld> ms;
		total_loop=m+n;
		while(total_loop--){
			cin>>x;
			
			if(total_loop<m){
				if(ms.find(x)==ms.end()){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
			}
			ms.insert(x);
		}
		ms.clear();
	}

	return 0;
}
