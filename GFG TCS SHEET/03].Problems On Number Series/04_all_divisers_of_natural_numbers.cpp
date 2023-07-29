class Solution{
public:
    int countFactors(int N){
        //code here
        int ans=0;
        for(int i=1;i<=N;i++){
            if(N%i==0){
                ans++;
            }
        }
        return ans;
    }
};