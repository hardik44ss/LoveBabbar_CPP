#include <iostream>
#include <algorithm>
using namespace std;

void sort01(int arr[], int n) {
    sort(arr, arr + n);
    int i = 0;
    int j = n - 1;
    while (i < j) {
        if (arr[i] > arr[j]) {
            swap(arr[i], arr[j]);
            i++;
            j--;
        } else {
            i++;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[7] = {0, 1, 1, 1, 0, 0, 1};
    sort01(arr, 7);
    return 0;
}
