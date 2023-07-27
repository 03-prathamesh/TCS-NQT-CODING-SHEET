class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        // string temp="";
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=' '){
        //         temp=temp+s[i];
        //     }
        // }
        // s=temp;
        // return s;
        //no extra space
        int i=0,itr=0;
        int n=s.size();
        while(i<n){
            if(s[i]!=' '){
                s[itr++]=s[i];
                
            }
            i++;
        }
        return s.substr(0,itr);
    }
};