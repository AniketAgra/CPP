#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin>>n;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count;
            cout<<" ";
            count=count+1;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}


// output:
// 1
// 2 3
// 4 5 6
// 7 8 9 10