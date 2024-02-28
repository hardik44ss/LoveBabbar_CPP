#include<iostream>
using namespace std;

int target(int arr[],int size , int trgt){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
     int start=s;
     int end=size-1;
     int med=start + (end - start) / 2;
     while(start<=end){
        if(arr[med]==trgt){
            return med;
        }else if(arr[med]<trgt){
            end=med;
        }else{
            start=med+1;
        }
        med=start + (end - start) / 2;
     }
    
    return -1;
}

int main () 
{
    int arr[8]={6,9,12,34,56,2,4,5};
    cout<<"The element is present at index "<<target(arr,8,4);
    return 0;
}