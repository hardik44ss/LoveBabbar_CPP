#include<iostream>
using namespace std;
int first_occurance(int arr[] , int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
           ans=mid;
           end = mid-1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int last_occurance(int arr[] , int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
           ans=mid;
           start = mid+1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}

int main () 
{
    int pvt[10]={1,2,3,5,6,8,8,8,8,8};
    cout<<"Firstt occ : "<<first_occurance(pvt,10,8)<<endl;
    cout<<"Last occ : "<<last_occurance(pvt,10,8)<<endl;
    cout<<"Total occurance : "<<last_occurance(pvt,10,8)-first_occurance(pvt,10,8)+1<<endl;
    return 0;
}
/*
int first_occurance(int arr[] , int size,int key){
    int start = 0;
    int end = size-1;
    if(arr[start]==key){
            return start;
        }
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            if(arr[mid]>arr[mid-1]){
                return mid;
            }else{
                end=mid;
            }
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int last_occurance(int arr[] , int size,int key){
    int start = 0;
    int end = size-1;
    if(arr[end]==key){
            return end;
    }
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            if(arr[mid]<arr[mid+1]){
                return mid;
            }else{
                start=mid;
            }
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
*/