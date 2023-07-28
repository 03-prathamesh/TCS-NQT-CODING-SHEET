// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        // int hash[257];
        // string result="";
        // for(int i=0;i<257;i++){
        //     hash[i]=0;
        // }
        // for(int i=0;i<string2.size();i++){
        //     hash[string2[i]]++;
        // }
        // for(int i=0;i<string1.size();i++){
        //     if(hash[string1[i]]==0){
        //         result=result+string1[i];
        //     }
        // }   //this will also run .
        // string1=result;
        // return string1;
        unordered_map<char,int>mp;
        for(int i=0;i<string2.size();i++){
            mp[string2[i]]++;
        }
        int iter=0;
        for(int i=0;i<string1.size();i++){
            if(mp.find(string1[i])==mp.end()){
                string1[iter]=string1[i];
                iter++;
            }
        }
        return string1.substr(0,iter);
    }
};