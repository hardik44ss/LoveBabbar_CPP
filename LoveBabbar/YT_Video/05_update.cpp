#include<iostream>
using namespace std;

void updatearr(int arr[]){
    arr[3] = 44; //updating the array with
    arr[0] = 21;
    return;
}

int main () 
{
    int arr[6]={1,2,3,4,5,6};
    for(int  i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    updatearr(arr);
    cout<<"\nAfter updation array : "<<endl<<" ";
    for(int  i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}