#include<iostream>
using namespace std;

int main(){
    int i = 1;
    int n;
    cin>>n;
     
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i;
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    }
}

//output
//1
//22
//333
//4444
//55555