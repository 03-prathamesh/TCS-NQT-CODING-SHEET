// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
         int temp=n;
         int ans=0;
         while(n!=0){
             int temp=n%10;
             ans=ans+(temp*temp*temp);
             n=n/10;
         }
         if(ans==temp){
             return "Yes";
         }
         return "No";
    }
};