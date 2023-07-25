
class Solution
{
    public:
    void rev(string &s,int start , int end){//here &s is very imp which change the actual string
        // int start=0;
        // int end=s.size()-1;
        while(start<=end){
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            start++;
            end--;
        }
    }
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        rev(s,0,s.size()-1);
        // string temp="";
        int start=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.')
            {
                rev(s,start,i-1);
                start=i+1;
                
            }
            
        }
        rev(s,start,s.size()-1);
        return s;
        
    } 
    
};