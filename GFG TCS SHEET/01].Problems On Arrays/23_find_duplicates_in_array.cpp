class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
       
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++){
        //     mp[arr[i]]++;
        // }
        // for(auto x:s1){
        //     if(mp[x]!=1){
        //         dupl.push_back(x);
        //     }
        // }
        //anothe approach but timelimit exceeds
        //  vector<int>dupl;
        // set<int>s1;
        
        // for(int i=0;i<n;i++){
        //     s1.insert(arr[i]);
        // }
        // int i=0;
        // for (auto it = s1.begin(); it != s1.end(); ++it) {
        //      if(count(arr,arr+n,*it)!=1){
        //          dupl.push_back(*it);
        //      }
        // }
        
        // if(s1.size()==n){
        //     cout<<-1;
        // }
        // else{
        //     return dupl;
        // }
       // set<int> s1(arr, arr + n); // Convert the array to a set

        // vector<int> dupl;

        // for (auto it : s1) {
        //     // If the element is already in the vector, it's a duplicate
        //     if (std::count(arr, arr + n, it) != 1) {
        //         dupl.push_back(it);
        //     }
        // }
        
        // if(s1.size()!=n){

        // return dupl;
        // }
        // else{
        //     cout<<-1;
        // }
        
        // set<int> uniqueElements;
        // vector<int> dupl;

        // for (int i = 0; i < n; i++) {
        //     // If the element is already in the uniqueElements set,
        //     // it's a duplicate, add it to the dupl vector.
        //     if (uniqueElements.count(arr[i]) > 0) {
        //         dupl.push_back(arr[i]);
        //     } else {
        //         // Otherwise, add the element to the uniqueElements set.
        //         uniqueElements.insert(arr[i]);
        //     }
        // }

        
        // if(uniqueElements.size()==n){
        //     cout<<-1;
        // }
        // else{
        //     return dupl;
        // }
        vector<int>v1;
        set<int>s1;
        unordered_map<int,int>mp; //foronly  map it will give you tc error
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto x:mp){
            if(x.second!=1){
                v1.push_back(x.first);
            }
        }
        if(v1.size()==0){
            cout<<-1;
        }
        
        for(auto x:v1){
            s1.insert(x);
        }
        v1.clear();
        for(auto x:s1){
            v1.push_back(x);
        }
        
        return v1;
        
    }
    
};