#include<iostream>
using namespace std;

void pivot(int arr[], int size ){
    int s=0;
    int e=size-1;
    int mid = s +  (e-s)/2;
    while(s<e) //Time complexity = O(log n)
    {
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }else{
            e=mid;
        }
    mid=s +  (e-s)/2;
    }
    cout<<s;
}

int main () 
{
    int pivt[5]={3,4,7,1,2};
    pivot(pivt,5);
    return 0;
}