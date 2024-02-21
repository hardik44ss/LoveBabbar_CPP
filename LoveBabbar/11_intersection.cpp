//It is given that arrays are in increasing order  
#include<iostream>
using namespace std;

void intersection(int arr1[], int m, int arr2[], int n) {
    int i=0;
    int j=0;
    while(i!=m && j!=n){
        if(arr1[i]<arr2[j]){i++; }
        else if(arr1[i]>arr2[j]){j++; }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;        
        }
    }
}

int main () 
{
    int arr1[6]={1,2,2,6,7,9};
    int arr2[6]={2,3,4,5,7,11};
    intersection(arr1,6,arr2,6);
    return 0;
}

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
// 	vector<int> res;
//     int i=0;
//     int j=0;
//     while(i!=n || j!=m){
//         if(arr1.at(i)<arr2.at(j)){i++; }
//         else if(arr1.at(i)>arr2.at(j)){j++; }
//         else{
//             res.push_back(arr1.at(i));
//             i++;
//             j++;       
//         }
//     }
// 	return res;
// }