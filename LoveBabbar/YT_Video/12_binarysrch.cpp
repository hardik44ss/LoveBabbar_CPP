#include<iostream>
using namespace std;

void srch(int arr[],int size ,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<i<<" ";
            break;
        }
    }
    for(int i=0;i<size;i++){
        if(arr[i]==key && arr[i+1]!=key){
            cout<<i<<" ";
            return;
        }
    }
}
int main () 
{
    int arr[8]={1,2,3,4,5,5,5,6};
    srch(arr,8,5);
    return 0;
}