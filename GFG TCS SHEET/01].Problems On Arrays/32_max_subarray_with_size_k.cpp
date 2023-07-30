class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int N){
        // code here 
        long long max_sum=0;
        long long window_sum=0;
        for(int i=0;i<k;i++){
            window_sum=window_sum+arr[i];
        }
        max_sum=max(max_sum,window_sum);
        for(int i=k;i<N;i++){
            // window_sum=window_sum+(arr[i]-arr[i-k]);
            window_sum=(window_sum-arr[i-k])+arr[i];
            max_sum=max(max_sum,window_sum);
        }
        return max_sum;
    }
};