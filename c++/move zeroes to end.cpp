#include<bits/stdc++.h>
using namespace std;

// Brute approach!
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    vector <int> temp;
    for(int i=0;i<n;i++){
        if (a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        a[i]=temp[i];
    }
    for(int i=temp.size();i<n;i++){
        a[i]=0;
    }
    return a;
}

// optimal- two pointer approach
vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here
    int j=-1;
    for(int i=0;i<n;i++){
      if (a[i] == 0) {
        j = i;
        break;
      }
    }
    if(j==-1) return a;
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
    return a;
}

int main(){
     



    return 0;
}
