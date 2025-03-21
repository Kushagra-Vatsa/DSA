class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        int ttlsum=accumulate(arr.begin(),arr.end(),0);
        int sum=0;
        for(int i=0;i<n;i++){
            if(sum==ttlsum-sum-arr[i]){
                return i;
            }
            sum+=arr[i];
        }
        return -1;
    }
};
