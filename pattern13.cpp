#include <iostream>
using namespace std;
int main(){
    int row=1;
    int n;
    cin>>n;
    
    while(row<=n ){
        int col = 1;
        while(col<=n-row+1){
            cout<<" ";
            col++;
        }
        int cl = 1;
        while(cl<=row){
            cout<<"*";
            cl++;
        }
        int clo = 1;
        while(clo<=row-1){
            cout<<"*";
            clo++;
        }
    row++;
    cout<<endl;
    }
    
}


// output:
//      *
//     ***
//    *****
//   *******