//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	   string temp="";
	   temp.push_back(str[0]);
	   for(int i=0;i<str.size();i++){
	       bool isdupl=false;
	       for(int j=0;j<temp.size();j++){
	           if(temp[j]==str[i]){
	               isdupl=true;
	               break;
	           }
	       }
	       if(!isdupl){
	            temp.push_back(str[i]);
	       }
	       
	   }
	   return temp;
	}
};