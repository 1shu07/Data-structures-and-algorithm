#include <iostream>
using namespace std;

void merge(int a[], int l, int mid, int h){
int b[1000];
int i=l, j=mid+1, k=0;

while(i<=mid && j<=h){
if(a[i]<=a[j]) b[k++]=a[i++];
else b[k++]=a[j++];
}

for(;i<=mid;i++) b[k++]=a[i];
for(;j<=h;j++) b[k++]=a[j];

for(i=0;i<k;i++) a[l+i]=b[i];
}

void mergeSort(int a[], int l, int h){
if(l<h){
int mid=(l+h)/2;
mergeSort(a,l,mid);
mergeSort(a,mid+1,h);
merge(a,l,mid,h);
}
}

void printArray(int a[], int n){
for(int i=0;i<n;i++) cout<<a[i]<<" ";
cout<<endl;
}

int main(){
int a[]={6,5,3,1,8,7,2,4};
int n=sizeof(a)/sizeof(a[0]);
mergeSort(a,0,n-1);
cout<<"Sorted array: ";
printArray(a,n);
return 0;
}
