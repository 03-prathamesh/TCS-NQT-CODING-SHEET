//User function template for C++
class Solution{
public:	
		
	class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	   // for(int i=S.size()-1;i>=0;i--){
	   //     if(S[i]=='a'|| S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u' ){
	   //         S.erase(i,1);
	   //     }
	   // } // this will also work accurately
	   int itr=0;
	   for(int i=0;i<S.size();i++){
	       if(S[i]!='a' &&  S[i]!='e' && S[i]!='i' && S[i]!='o' && S[i]!='u' ){
	           S[itr++]=S[i];
	           
	       }
	   }
	    return S.substr(0,itr);
	}
};
};