

int Count(string s){
    //complete the function here
    int count=0;
    for(int i=0;i<s.size();i++){
        if((s[i]>='A' && s[i]<='Z')|| (s[i]>='a' && s[i]<='z')){
            count++;
        }
    }
    return count;
}