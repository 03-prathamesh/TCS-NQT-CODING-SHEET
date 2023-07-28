class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
       
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
       
        
        for(int i=0;i<a.size();i++){
            mp1[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++){
            mp2[b[i]]++;
        }
       
        if(mp1==mp2){
            return 1;
        }
        return 0;
        
    }

};