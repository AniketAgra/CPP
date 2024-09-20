#include <bits/stdc++.h> 

int firstocc(vector<int>& arr, int n, int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
int secondocc(vector<int>& arr, int n, int k){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid= start+(end-start)/2;

    while(start<=end){
        if(arr[mid]==k){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k){
            end=mid-1;
        }
        else if(arr[mid]<k){
            start=mid+1;
        }
        mid= start+(end-start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstocc(arr,n,k);
    p.second=secondocc(arr,n,k);

    return p;
}