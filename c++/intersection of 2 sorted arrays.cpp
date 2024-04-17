#include <bits/stdc++.h> 
// brute
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	int vis[n]={0};
	vector<int> ans;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i]==b[j] && vis[j]==0){
				ans.push_back(a[i]);
				vis[j]=1;
				break;

			}
			if(b[j]>a[i]){
				break;
			}

		}


	}
	return ans;
}

// optimal
vector<int> findArrayIntersection(vector<int> &A, int n, vector<int> &B,int m) {
  vector<int> ans;
  int i = 0, j = 0;
  while (i < A.size() && j < B.size()) {
    if (A[i] < B[j]) {
      i++;
    } else if (B[j] < A[i]) {
      j++;
    } else {
      ans.push_back(A[i]);
      i++;
      j++;
    }
  }
  return ans;
}
