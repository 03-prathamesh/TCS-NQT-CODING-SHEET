// User function template for c++
class Solution {
  public:
    string removeChars(string string1, string string2) {
        // code here
        int hash[257];
        string result="";
        for(int i=0;i<257;i++){
            hash[i]=0;
        }
        for(int i=0;i<string2.size();i++){
            hash[string2[i]]++;
        }
        for(int i=0;i<string1.size();i++){
            if(hash[string1[i]]==0){
                result=result+string1[i];
            }
        }
        string1=result;
        return string1;
    }
};