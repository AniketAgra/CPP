#include<iostream>
using namespace std;

int main(){
    int row = 1;
    int n;
    cin>>n;
    
    while(row<=n){
        int col=1;
        int value=row;
        while(col<=row){
            cout<<value;
            value = value+1;
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }
}

//output:
// 1
// 23
// 345

//method2:

#include<iostream>
using namespace std;

int main(){
    int row = 1;
    int n;
    cin>>n;
    
    while(row<=n){
        int col=row;
        while(col<=2*row){
            cout<<col<<"";
            col=col+1;
        }
        row=row+1;
        cout<<endl;
    }
}
