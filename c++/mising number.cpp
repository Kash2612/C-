// better-hashing
int missingNumber(vector<int>&a, int N) {
    int hash[N+1]={0};
    for(int i=0;i<N;i++){
        hash[a[i]]=1;
    }
    for(int i=1;i<=N;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

// optimal-sum
int missingNumber(vector<int>&a, int N) {
    int sum=0;
    for(int i=0;i<N;i++){
        sum+=a[i];
    }
    int sum2=(N*(N+1))/2;
    return (sum2-sum);
}

// optimal-xor- O(2N)
int missingNumber(vector<int>&a, int N) {
    int x=0;
    for(int i=0;i<N-1;i++){
        x=x^a[i];
    }
    int y=0;
    for(int i=1;i<=N;i++){
        y=y^i;
    }

    return (x^y);
}

// optimal xor- O(N)
int missingNumber(vector<int>&a, int N) {
    int x=0;
     int y=0;
    for(int i=0;i<N-1;i++){
        x=x^a[i];
        y=y^(i+1);
    
    }
    y=y^N;
    return (x^y);
}