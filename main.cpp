//
//  main.cpp
//  StacksAndQueues
//
//  Created by A Emmanual Sarker on 16/11/22.
//  Copyright © 2022 A Emmanual Sarker. All rights reserved.
//

#include <bits/stdc++.h>
                            

typedef long long int lld;
using namespace std;


int main() {

    ios_base::sync_with_stdio(0);  cin.tie(0);  cout.tie(0);
    /*
     Stack - LIFO
     LIFO = Last In First Out
     
     size and top element can be accessed from a stack
     
     Operations:
     
     1. push
     2. pop
     3. top
     
     */
    
    /*
     Queue - FIFO
     FIFO = First In First Out
     
     Operations
     1. push
     2. pop
     3. front
     */
    
    stack<int>s;
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    queue<string>q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("def");
    q.push("ghi");
    
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
    return 0;
                            
}
