# recursion_cpp
reversing an array using recursion in c++
#include <bits/stdc++.h>
using namespace std;
void rev(int i,int n,int arr[]){
    if(i>n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    rev(i+1,n,arr);
    
}
int main()
{ int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
     cin>>arr[i];
 }
 rev(0,n,arr);
 cout<<"array:"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
    return 0;
}

this is a functional recursive code of reversing an array in c++. function recusrion is used when we want the function to give us something i.e to return a value. this kind of recursion is very common in dynamic progrmming.
