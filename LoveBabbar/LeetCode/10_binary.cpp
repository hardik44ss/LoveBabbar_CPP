#include<iostream>
using namespace std;

void display(int arr[] , int n ){
    for(int i=0;i<n;i=i+2){
        cout<<arr[i]<<" ";
    }
}
// void occurance(int arr[] , int size, int key){
//     int i=0;
//     int j = size-1;
//     while(arr[i])
// }

int main () 
{
    int hardik[8]={1,2,3,4,5,6,7,8};
    display(hardik,8);
    return 0;
}