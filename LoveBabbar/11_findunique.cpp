//In a given array except one element all other elements repeats , We have to find that one element
#include<iostream>
using namespace std;

int findunque(int arr[] , int size){
    int res=0;
    for(int i=0;i<size;i++){
        res^=arr[i];
    }
    return res;
}

int main () 
{
    int arr[7]={1,2,3,4,3,2,1};
    cout<<"Unique element in array : "<<findunque(arr,7);

    return 0;
}