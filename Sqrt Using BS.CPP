class Solution {
public:
    int binarySearch(int n){
        int start=0;
        int end=n;
        long long int mid=start+(end-start)/2;
        long long int ans=-1;
        while(start<=end){
            if(mid*mid==n){
                return mid;
            }
            if(mid*mid>n){
                end=mid-1;
            }
            else{//mid**mid<n
                ans=mid;
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
         return binarySearch(x);
    }
};