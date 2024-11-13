#include <stdio.h>
int main() {
    int n, i;
    int *ptr;

    // Ask the user for the number of integers
    printf("Enter the number of integers you want to input: ");
    scanf("%d", &n);

    // Allocate memory dynamically for n integers
    ptr = (int *)malloc(n * sizeof(int));

    // Check if the memory has been successfully allocated
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    // Take n integers as input from the user
    for(i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    // Print the entered integers
    printf("You entered: \n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    // Free the dynamically allocated memory
    free(ptr);

    return 0;
}
