class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
       
        vector<int>ans;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
       
        for(int i=0;i<N;i++){
           arr[i]=mp[i+1];
        }
        
        

    // Count the frequency of elements from 1 to N

    }
};