#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamic memory allocation for an integer
    int *intVar = (int *)malloc(sizeof(int));

    // Check if allocation is successful
    if (intVar != NULL) {
        *intVar = 42;  // Assign a value
        printf("Dynamic Integer Variable: %d\n", *intVar);

        // Don't forget to free the allocated memory
        free(intVar);
    } else {
        printf("Memory allocation failed for int variable.\n");
    }

    // Dynamic memory allocation for a float
    float *floatVar = (float *)calloc(1, sizeof(float));

    // Check if allocation is successful
    if (floatVar != NULL) {
        *floatVar = 3.14;  // Assign a value
        printf("Dynamic Float Variable: %.2f\n", *floatVar);

        // Don't forget to free the allocated memory
        free(floatVar);
    } else {
        printf("Memory allocation failed for float variable.\n");
    }

    // Dynamic memory allocation for a character
    char *charVar = (char *)malloc(sizeof(char));

    // Check if allocation is successful
    if (charVar != NULL) {
        *charVar = 'A';  // Assign a value
        printf("Dynamic Character Variable: %c\n", *charVar);

        // Don't forget to free the allocated memory
        free(charVar);
    } else {
        printf("Memory allocation failed for char variable.\n");
    }

    return 0;
}
