#include <iostream>

using namespace std;

bool linearsearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int key;
    cout<<"Give number to be searched :";
    cin>>key;
    
    int size;
    cout<<"Give the size of array:";
    cin>>size;
    
    int arr[size];
    for(int j=0;j<size;j++){
        cin>>arr[j];
    }
    
    bool found= linearsearch(arr,size,key);
    if(found){
        cout<<"Key is present";
    }
    else{
        cout<<"Key not present";
    }
}
