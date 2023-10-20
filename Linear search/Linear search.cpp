#include <iostream>
#include <vector>

int linearSearch(const std::vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found
}

int main() {
    int n;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    std::vector<int> arr(n);
    std::cout << "Enter the elements of the array, separated by spaces:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int key;
    std::cout << "Enter the number you want to search for: ";
    std::cin >> key;

    int result = linearSearch(arr, key);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    }
    else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}
