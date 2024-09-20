#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int array[n];
    int sum=0;
    
    for(int i =0;i<n;i++){
        
        cin>>array[i];
        // array[i]=array[i]+array[i+1];
        sum=sum+array[i];
        // cout<<"sum of the array:"<<sum<<endl;
        
    }
    cout<<"sum of the array:"<<sum<<endl;
    // return sum;
}
