//User function template for C++
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    for(int i=S.size()-1;i>=0;i--){
	        if(S[i]=='a'|| S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' ){
	            S.erase(i,1);
	        }
	    }
	    return S;
	}
};