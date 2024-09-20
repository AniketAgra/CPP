bool isPossible(vector<int>& arr, int n, int m,int mid){
    int stdCnt=1;
    int pageSum=0;
    for(int j=0;j<arr.size();j++){
        if(pageSum+arr[j]<=mid){
            pageSum+=arr[j];
        }
        else{
            stdCnt++;
            pageSum=arr[j];
        }
        if(stdCnt>m ||arr[j]>mid){
                return false;
        }
    }
    return true;
}
int findPages(vector<int>& arr, int n, int m) {
    if(m>n){
        return -1;
    }
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;

    while(start<=end){
        if (isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}