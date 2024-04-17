string read(int n, vector<int> arr, int target)
{
    int left=0;
    int right= n-1;
    sort(arr.begin(),arr.end());
    while(left<right){
        if (arr[left]+arr[right]<target){
            left++;
        }
        else if (arr[left]+arr[right]>target){
            right--;
        }
        else{
            return "YES";
        }
    }
    return "NO";
}