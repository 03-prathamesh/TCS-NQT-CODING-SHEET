int countWords(string s)
{
    //code here.
    string temp="";
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' ' || s[i]=='\t' || s[i]=='\n'){
            if(!temp.empty()){
                count++;
                temp="";//temp.clear();
            }
        }
        else{
            
            temp=temp+s[i];
        }
    }
    if (!temp.empty()) {
        count++;
    }
    return count;
}