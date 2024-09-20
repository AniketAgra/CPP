bool ifPossible(vector<int> &boards, int k,int mid){
    int position = 0;
    int studentCount =1;

    for(int i=0;i<boards.size();i++){
        if(position+boards[i]<=mid){
            position+=boards[i];
        }
        else{
            studentCount++;
            if(studentCount>k||boards[i]>mid){
                return false;
            }
            position=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    
    int start=0;
    int sum=0;

    for(int i=0;i<boards.size();i++){
        sum+=boards[i];
    }
    int end=sum;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end){
        if(ifPossible(boards,k,mid)){
          ans = mid;
          end = mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}