

class Solution
{
    public:
    
    unsigned long long ConvInt(string tp){
      unsigned long long sum=0;
     for(int i=0;i<tp.size();i++){
        if(tp[i]>='0' && tp[i]<='9'){
            int ch=tp[i]-'0';
            sum=sum*10+ch;
        }
     }
        return sum;
    }
    //Function ato calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    unsigned long long ans=0;
    	string temp="";
    	// Your code here
    	for(int i=0;i<str.size();i++){
    	    if(str[i]>='0' && str[i]<='9'){  //this small mistake >=1 insted of 0 took my almost 1 hour. i have learned a lot about dry run of code by checking test cases and checking whole code if correct or not according to the given problem
            //   int num=ConvInt(str[i]);
                temp=temp+str[i];
               
            }
            else{
                unsigned long long num=ConvInt(temp);
                ans=ans+num;
                temp="";
            }
    	}
    	unsigned long long num=ConvInt(temp);
        ans=ans+num;
    	return ans;
    	
    }
};