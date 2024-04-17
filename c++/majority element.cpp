#include<bits/stdc++.h>
// better- hashing
int majorityElement(vector<int> v) {
	map<int,int>mpp;
	for(int i=0;i<v.size();i++){
		mpp[v[i]]++;
	}
	for(auto it: mpp){
		if(it.second>v.size()/2){
			return it.first;
		}
	}
	return -1;
}

// optimal- moore'svoting algorithm
int majorityElement(vector<int> v) {
	int ele;
	int count=0;
	for(int i=0;i<v.size();i++){
		if (count==0){
			count=1;
			ele=v[i];

		}
		
		else if(v[i]==ele){
			count++;
		}
		else{
			count--;
		}
	}
	int count1=0;
	for(int i=0;i<v.size();i++){
		if(v[i]==ele){
			count1++;
		}

	}
	if(count1>v.size()/2){
		return ele;
	}
	return -1;