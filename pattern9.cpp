#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin>>n;
     
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<i;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}

//output
//11111
//2222
//333
//44
//5