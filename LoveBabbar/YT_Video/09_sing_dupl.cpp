// You are given an array ‘ARR’ of size ‘N’ c There is a single integer value that is present in the array twice. 
#include<iostream>
using namespace std;
void finddupl(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
            }
        }
    } 
}

int main () 
{
    int arr[7]={1,2,3,4,2,6,};
    finddupl(arr,7);
    return 0;
}