

vector<int> minAnd2ndMin(int arr[], int n) {
    
       vector<int>ans;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
    //   cout<<s<<endl;
       int min_ele=arr[0];
       for(int i=1;i<n;i++){
           if(min_ele>arr[i]){
               min_ele=arr[i];
           }
       }
       ans.push_back(min_ele);
       
       int min_ele2=INT_MAX;
    //   if(arr[0]!=min_ele){
    //       min_ele2=arr[0];
    //   }
    //   else{
    //       min_ele2=arr[1];
    //   }
       
        for(int i=0;i<n;i++){
           if(min_ele2>arr[i] && arr[i]!=min_ele){
               min_ele2=arr[i];
           }
         }
         
           ans.push_back(min_ele2);
        
        if (min_ele2 != INT_MAX && min_ele2!=min_ele && mp.size()!=1) {
            ans.push_back(min_ele2);
            return ans;
        } else {
            // Second minimum is not found
            ans[0]=-1; // Clear the vector
            
        }

    
}