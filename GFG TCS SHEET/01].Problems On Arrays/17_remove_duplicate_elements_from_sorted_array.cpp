
class Solution{
public:
    int remove_duplicate(int arr[],int n){
        // code here
        int res=1;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[res-1]){
                arr[res]=arr[i];
                res++;
            }
        }
        return res;
    }
};