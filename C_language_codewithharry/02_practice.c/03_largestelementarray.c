#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    printf("Largest is %d", largest);
    return 0;
}