#include<bits/stdc++.h>
using namespace std;
// brute-using set method
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int size1=a.size();
    int size2=b.size();
    set<int> st;
    for(int i=0;i<size1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<size2;i++){
        st.insert(b[i]);

    }
    vector<int> unions;
    
    for(auto it: st){
        unions.push_back(it);
    }
    return unions;
}

// optimal- 2 pointer approach
vector < int > sortedArray(vector < int > a, vector < int > b) {
    int n1=a.size();
    int n2=b.size();
    int i=0;
    int j=0;
    vector<int> unions;
    while(i<n1 && j<n2){
        if (a[i] <= b[j]) {
            if(unions.back()!= a[i] || unions.size()==0){
                unions.push_back(a[i]);
            }
            i++;
        }
        else{
            if(unions.back()!= b[j] || unions.size()==0){
                unions.push_back(b[j]);
            }
            j++;
        }

    }
    while(i<n1){
        if(unions.back()!= a[i] || unions.size()==0){
            unions.push_back(a[i]);
        }
        i++;
    }
    while(j<n2){
        if(unions.back()!= b[j] || unions.size()==0){
            unions.push_back(b[j]);
        }
        j++;
    }

    return unions;
}