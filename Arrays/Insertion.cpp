#include <iostream>

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size, position, newValue;

    // Input the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Input array elements
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Input the position to insert the new value
    std::cout << "Enter the position to insert the new value: ";
    std::cin >> position;

    // Check if the position is valid
    if (position < 0 || position > size) {
        std::cout << "Invalid position. Insertion failed." << std::endl;
        return 1;
    }

    // Input the new value to be inserted
    std::cout << "Enter the new value to insert: ";
    std::cin >> newValue;

    // Shift elements to make space for the new value
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new value at the specified position
    arr[position] = newValue;

    // Increment the size of the array
    size++;

    // Display the updated array
    std::cout << "Array after insertion:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
