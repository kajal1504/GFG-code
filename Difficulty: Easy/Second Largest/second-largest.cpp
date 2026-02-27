class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int firstLargest=-1;
        int secondLargest=-1;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]>firstLargest){
                secondLargest=firstLargest;
                firstLargest=arr[i];
            }else if(arr[i]>secondLargest && arr[i]!=firstLargest){
                secondLargest=arr[i];
            }
        }
        return secondLargest;
    }
};