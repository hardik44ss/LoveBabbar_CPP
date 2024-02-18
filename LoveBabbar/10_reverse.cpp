#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    int start =0;
    int end = size-1;
    while(start<=end){
        swap(arr[start] , arr[end]);
        start++;
        end--;
    }
}
void printarr(int arr[],int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main () 
{
    int arr1[10]={3,-4,23,45,3,-3,4,-6,3,2};
    int arr2[11]={3,-4,23,45,3,-3,4,-6,3,2,11};

    reverse(arr1,10);
    reverse(arr2,11);

    printarr(arr1,10);
    printarr(arr2,11);
    return 0;
}