/*#include <iostream>

#define MAX_SIZE 100  // Maximum size of the array

// Function to insert an element at a specific position
void insertElement(int arr[], int &size, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > size || size >= MAX_SIZE) {
        std::cout << "Invalid position or array is full.\n";
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Update the size of the array
    size++;
}

int main() {
    int arr[MAX_SIZE] = {1, 2, 4, 5};  // Initial array
    int size = 4;  // Number of elements in the array
    int element = 3;  // Element to insert
    int position = 2;  // Position where the element should be inserted

    // Print original array
    std::cout << "Original array:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Insert the element
    insertElement(arr, size, element, position);

    // Print updated array
    std::cout << "Array after insertion:\n";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
*/
//BETTER METHORD
#include <iostream>
#include <vector>

// Function to insert an element at a specific position
void insertElement(std::vector<int>& vec, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > vec.size()) {
        std::cout << "Invalid position.\n";
        return;
    }

    // Insert the new element
    vec.insert(vec.begin() + position, element);
}

int main() {
    std::vector<int> vec = {1, 2, 4, 5};  // Initial vector
    int element = 3;  // Element to insert
    int position = 2;  // Position where the element should be inserted

    // Print original vector
    std::cout << "Original vector:\n";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    // Insert the element
    insertElement(vec, element, position);

    // Print updated vector
    std::cout << "Vector after insertion:\n";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << "\n";

    return 0;
}
