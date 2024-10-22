#include <stdio.h>

#define MAX_SIZE 100  // Maximum size of the array

// Function to insert an element at a specific position
void insertElement(int arr[], int *size, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > *size || *size >= MAX_SIZE) {
        printf("Invalid position or array is full.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Update the size of the array
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 4, 5};  // Initial array
    int size = 4;  // Number of elements in the array
    int element = 3;  // Element to insert
    int position = 2;  // Position where the element should be inserted

    // Print original array
    printf("Original array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert the element
    insertElement(arr, &size, element, position);

    // Print updated array
    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
