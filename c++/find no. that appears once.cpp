#include<vector>
// brute
int getSingleElement(vector<int> &arr){
	for(int i=0;i<arr.size();i++){
		int count=0;
		for(int j=0;j<arr.size();j++){
			if (arr[i]==arr[j]){
				count++;
			}
		}
		if(count==1){
			return arr[i];
		}

	}
	return -1;	
}

// better-hashing
int getSingleElement(vector<int> &arr) {

    
    int n = arr.size();

    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }

    
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1)
            return arr[i];
    }
    return -1;
}

// better- hash map

int getSingleElement(vector<int> &arr) {
	map<int,int>mpp;
	for(int i=0;i<arr.size();i++){
		mpp[arr[i]]++;

	}
	for(auto it:mpp){
		if (it.second==1){
			return it.first;
		}
	}
	return -1;
}


// optimal-xor

int getSingleElement(vector<int> &arr) {
	int x=0;
	for(int i=0;i<arr.size();i++){
		x=x^arr[i];
	}
	return x;

}


int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}