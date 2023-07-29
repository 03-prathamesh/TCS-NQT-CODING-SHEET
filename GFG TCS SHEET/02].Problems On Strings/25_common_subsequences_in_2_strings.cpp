//User function template for C++
class Solution{
public:
	bool commonSubseq (string a, string b)
	{
	   
	   // int ans=0;
	   // unordered_map<char,int>check1;
	   // unordered_map<char,int>check2;
	   // for(int i=0;i<a.size();i++){
	   //     check1[a[i]]++;
	   // }
	   // for(int i=0;i<b.size();i++){
	   //     check2[b[i]]++;
	   // }
	   // for(auto x:check1){
	   //     int num=x.first;
	   //     if(check2.find(num)!=check2.end()){
	   //         ans++;
	   //     }
	   // }
	   // if(ans==0){
	   //     return 0;
	   // }
	   // return 1;
	   set<char>s1(a.begin(),a.end());
	   set<char>s2(b.begin(),b.end());
	   for(int i=0;i<a.size();i++){
	       int key=a[i];
	       if(s2.find(key)!=s2.end()){
	           return 1;
	       }
	   }
	   
	   return 0;
	}
};