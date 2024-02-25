#include<iostream>
using namespace std;

void printarr(int arr[], int n) {
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void swapalter(int *arr ,int size){
    for(int i=0;i<size ; i+=2){
        if(i+1<size){
            swap(arr[i] , arr[i+1]);
        }
    }
}

int main () 
{
    int arr[10]= {1,2,3,4,5,6,7,8,9,10};
    int arr2[9]= {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n2 = sizeof(arr2)/sizeof(arr[0]);
    swapalter(arr,n);
    swapalter(arr2,n2);
    cout << "Array after swapping : ";
    printarr(arr,n);
    cout << "\nArray after swapping : ";
    printarr(arr2,n2);

    return 0;
}