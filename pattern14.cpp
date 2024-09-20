// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<col;
            col++;
        }
        int cl=0;
        while(cl<=n-row-1){
            cout<<"*";
            cl++;
        }
        int cl1=0;
        while(cl1<=n-row-1){
            cout<<"*";
            cl1++;
        }
        int col1 = 1;
        int count = 1;
        while(col1<=row){
            cout<<row-col1+1;
            count++;
            col1++;
        }
        
        row++;
        cout<<endl;
        
        
    }
    
}


//output:
//1********1
//12******21
//123****321
//1234**4321
//1234554321