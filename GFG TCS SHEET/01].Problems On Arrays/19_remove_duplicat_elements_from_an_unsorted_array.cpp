// User function Template for C++

class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) {
        vector<int>temp;
        unordered_map<int,bool>mp;
    
         
        // for(int i=0;i<N;i++){
        //     auto it=find(temp.begin(),temp.end(),A[i]);
        //     auto it2=mp.find(A[i]);
        //     if(it==temp.end() && it2!=mp.end()){
        //         temp.push_back(it2->first);
                //how to push key of map accordin to the another array elements
                
        //     }
        // }
        for(int i=0;i<N;i++){
            if(mp.find(A[i])==mp.end()){
                temp.push_back(A[i]);
            }
            
            mp[A[i]]=true;
        }
        return temp;
    }
};// User function Template for C++

class Solution{
    public:
    vector<int> removeDuplicate(int A[], int N) {
        vector<int>temp;
        unordered_map<int,bool>mp;
    
         
        // for(int i=0;i<N;i++){
        //     auto it=find(temp.begin(),temp.end(),A[i]);
        //     auto it2=mp.find(A[i]);
        //     if(it==temp.end() && it2!=mp.end()){
        //         temp.push_back(it2->first);
                //how to push key of map accordin to the another array elements
                
        //     }
        // }
        for(int i=0;i<N;i++){
            if(mp.find(A[i])==mp.end()){
                temp.push_back(A[i]);
            }
            
            mp[A[i]]=true;
        }
        return temp;
    }
};