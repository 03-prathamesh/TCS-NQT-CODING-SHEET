class Solution{
public:
    int sumOfDigits(int N){
        //code here
        int sum=0;
        while(N!=0){
            int temp=N%10;
            sum=sum+temp;
            N=N/10;
        }
        return sum;
    }
};