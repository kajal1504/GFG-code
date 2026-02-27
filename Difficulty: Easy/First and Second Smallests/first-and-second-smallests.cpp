class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int smallest=INT_MAX;
        int secondSmallest=INT_MAX;
        int n=arr.size();
        
        for(int i=0;i<n; i++){
            if(arr[i]<smallest){
                secondSmallest=smallest;
                smallest=arr[i];
            }else if(arr[i]<secondSmallest && arr[i]!=smallest){
                secondSmallest=arr[i];
            }
        }if(secondSmallest==INT_MAX){
            return {-1};
        }
        return {smallest, secondSmallest};
    }
};