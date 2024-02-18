#include<iostream>
using namespace std;

void FindDup(int arr[],int n){
    
    cout<<"Duplicate numbers : ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++) {
            int Sum=0;
            if(arr[i]==arr[j]){
                Sum++;                
            }
            if(Sum==2){
                    cout<<arr[i]<<" ";
            }
        }
    }
   
}

int main () 
{
    int arr[10]={4,-5,3,2,1,4,3,9,3,-5};
    FindDup(arr,10);

    return 0;
}