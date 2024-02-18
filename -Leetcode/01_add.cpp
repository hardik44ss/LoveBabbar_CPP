#include<iostream>
using namespace std;

int main() {
    int nums[4] = {1,7,10,8};
    int target = 9;
    int output[2]={0,0};
    
    for(int i=0; i<4; i++) {
        for(int j=i+1; j<4; j++) {
            if(nums[i] + nums[j] == target) {
                output[0] = i;
                output[1] = j;
                cout << "Output: [" << i << "," << j << "]";
                return 0;
            }
        }
    }
    return 0;
}