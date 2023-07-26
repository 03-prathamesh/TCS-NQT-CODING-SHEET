// User function Template for C++

class Solution {
  public:
    int isDigitSumPalindrome(int n) {
        // code here
        int sum=0;
        int temp=n;
        while(n!=0){
            int temp=n%10;
            sum=sum+temp;
            n=n/10;
        }
         
         int temp2=sum;
         int sum2=0;
        
        while(sum!=0){
            int temp=sum%10;
            sum2=sum2*10+temp;
            sum=sum/10;
        }
        if(sum2==temp2){
            return 1;
        }
        return 0;
    }
};