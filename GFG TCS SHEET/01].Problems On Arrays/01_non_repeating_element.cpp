class Solution{
    public:
    int firstNonRepeating(int arr[], int n) 
    { 
        // Complete the function
        map<int,int>mp;
        // int size= sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[arr[i]]==1){
                return arr[i];
            }
        }
        return 0;
        
    } 
  
};