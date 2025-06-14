Stack Implementation using Array in C++

#include<iostream>
using namespace std; 

class stack{
private:
int top= -1 ; 
int size ; 
int *arr;  

public: 
stack(int n){
size = n ; 
arr = new int[size]; 
}

~stack() {
 delete[] arr;
}

void push(int x){
if(isFull()){
cout<<"full"; 
}
else 
arr[++top]= x; 
}

void pop(){
if(isEmpty()){
cout<<"empty";
}
else 
top--;
}

void displayTop(){
 if(!isEmpty()) {
   cout << arr[top] << endl;
} 
else{
cout << "empty" << endl;
}}

bool isFull(){
return top == size-1; 
}

bool isEmpty(){
return top == -1;
}
};

int main(){
int n=5; 
stack s(n) ; 

s.push(1);
s.push(2); 
s.pop();
s.displayTop();

return 0; 
}
