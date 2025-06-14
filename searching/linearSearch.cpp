#include<iostream>
using namespace std; 

void linearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++)
    if(arr[i]==key){
        cout<<" found! at : " <<i<<"th index";
    return; 
    }
    cout<<" not found!";
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int key=5;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    linearSearch(arr, n , key);
    return 0 ; 
    
}
