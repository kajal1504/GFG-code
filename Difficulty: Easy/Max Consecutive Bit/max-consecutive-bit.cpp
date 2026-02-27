class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int ans=1;
        int count=1;
        int n= arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                count++;
               
            }else {
                count=1;
            }
            ans=max(ans, count);
              
        }return ans;
    }
};