 STACK USING QUEUE 
#include<iostream>
#include <queue>
using namespace std; 

class stack{

queue<int>q1 , q2; 

public: 
void push(int x) {
q2.push(x);

while (!q1.empty()) {
q2.push(q1.front());
q1.pop();
}
swap(q1, q2);  
}

int pop(){
if (q1.empty()) {
cout << "Stack is empty\n";
return -1;
}
int ans= q1.front();
q1.pop(); 
return ans ; 
}

int top(){
return q1.front(); 
}

bool empty(){
return q1.empty(); 
}
}

int main() {
    stack s;
    s.push(10);
    s.push(20);
    cout << "Top:" << s.top() << endl; 
    s.pop();
    cout << "Top after pop:" << s.top() << endl; 
    return 0;
}