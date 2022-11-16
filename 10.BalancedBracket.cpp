#include <bits/stdc++.h>

using namespace std;
typedef long long int lld;
int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    string str;
    int t;
    cin>>t;
    while(t--){
        cin>>str;
        stack<char>s;
        bool flag=true;
        for(int i=0;i<str.size();++i){
            if(str[i]=='(' || str[i]=='{' || str[i]=='['){
                s.push(str[i]);
            }
            else{
                if(s.empty()==false){
                    if(str[i]==')'){
                        if(s.top()=='('){
                            s.pop();
                        }
                        else{
                            flag=false;
                            break;
                        }
                    }
                    else if(str[i]=='}'){
                        if(s.top()=='{'){
                            s.pop();
                        }
                        else{
                            flag=false;
                            break;
                        }
                    }
                    else{
                       if(s.top()=='['){
                            s.pop();
                        }
                        else{
                            flag=false;
                            break;
                        }
                    }
                    
                }
                else{
                    flag=false;
                    break;
                }
            }
            
        }
        if(s.empty() && flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;
                            
}
