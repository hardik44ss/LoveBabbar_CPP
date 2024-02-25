#include<iostream>
using namespace std;

bool search(int arr[] , int size , int key ){
    for (int i=0;i<size;i++){
        if(key ==arr[i]){
            return true;
        }
    }
    return false;
}
void rev_arr(int arr[],int size){
    int rev[size];
    cout<<"Reversed Array : { ";
    for(int i=0;i<size;i++){
        rev[i] = arr[size-1-i];
        cout<<rev[i]<<" ";
    }
    cout<<"}"<<endl;
}

int main () 
{
    int arr[10]={3,-4,23,45,3,-3,4,-6,3,2};
    bool found = search(arr,10,8);
    if(found){
        cout<<" Key is present "<<endl;
    }else{
        cout<<" Key is absent "<<endl;
    }
    rev_arr(arr,10);
    
    return 0;
}