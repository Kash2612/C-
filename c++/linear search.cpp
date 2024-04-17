#include<bits/stdc++.h>
using namespace std;
int linear_search(int ele,int a[],int n){
    for(int i=0;i<n;i++){
        if (a[i]==ele){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int ele;
    cout<<"enter element to be searched: ";
    cin>>ele;
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter array's elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=linear_search(ele,a,n);
    if(x==-1){
        cout<<ele<<" is not present";
    }
    else {
        cout<<ele<<" is present at index "<<x;
    }
    
    return 0;
}