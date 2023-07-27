class Solution
{
  public:
    string modify (string s)
    {
        //code here.
        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                temp=temp+s[i];
            }
        }
        s=temp;
        return s;
    }
};