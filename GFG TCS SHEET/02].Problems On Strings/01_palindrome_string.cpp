//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
	    string n=s;
	    string temp="";
	    int start=0;
	    int end=s.size()-1;
	    while(start<=end){
	        char temp=s[start];
	        s[start]=s[end];
	        s[end]=temp;
	        start++;
	        end--;
	    }
	    if(n==s){
	        return 1;
	    }
	    return 0;
	}

};