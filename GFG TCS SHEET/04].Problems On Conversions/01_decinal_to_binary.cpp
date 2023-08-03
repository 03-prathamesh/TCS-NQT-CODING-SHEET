void toBinary(int N)
{
    // your code here

    string ans="";
    
    while(N!=0){
        int digit=N%2;
        char character = digit + '0';
        ans=ans+character;
        N=N/2;
    }
    
    
    reverse(ans.begin(),ans.end());
    cout<<ans;
        
}