#include<iostream>
using namespace std;

void FindDup(int arr[],int n){
    
    cout<<"Duplicate no. in Array : ";
    for(int i=0;i<n;i++){
        int Sum=0;
        for(int j=i+1;j<n;j++) {
            if(arr[i]==arr[j]){
                Sum++;   
            }
        }
        if(Sum==1){
            cout<<arr[i]<<" ";
        }          
    }
    cout<<endl;
}
void Arr_Intersection(int arr1[],int n1 , int arr2[],int n2){
    cout<<"\nIntersection : ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}

int main () 
{
    int arr1[10]={4,-5,3,2,1,4,3,9,3,-5};
    int arr2[10]={1,3,5,7,4,6,3,6,6,4};
    // FindDup(arr1,10);
    // FindDup(arr2,10);
    Arr_Intersection(arr1,10,arr2,10);



    return 0;
}