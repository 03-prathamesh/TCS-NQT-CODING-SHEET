//User function template for C++

class Solution{
public:
    string removeSpecialCharacter(string s) {
        // code here
        int iter=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
                s[iter]=s[i];
                iter++;
            }
        }
        int count=0;
        for(int i=0;i<iter;i++){
             if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
               count++;
            }
        }
        if(count==0){
            return "-1";
        }
        return s.substr(0,iter);
        
    }
};