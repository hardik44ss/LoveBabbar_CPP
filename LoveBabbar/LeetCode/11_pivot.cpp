#include<iostream>
using namespace std;

void target(int arr[],int size ){
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
    cout<<"Element is present at index "<<s<<endl;
}

int main () 
{
    int pvt[7]={2,3,6,8,9,0,1};
    target(pvt,7);
    return 0;
}