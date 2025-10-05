#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid - 1; 
        }
    }
    return -1; 
}
int main() {
    vector<int> numbers = {1, 5, 10, 34, 42, 89};
    int target = 34;
    cout << "Sorted Array: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    int index = binarySearch(numbers, target);
    if (index != -1) {
        cout << "Binary Search: Element " << target << " found at index " << index << endl;
    } else {
        cout << "Binary Search: Element " << target << " not found." << endl;
    }
    target = 7;
    index = binarySearch(numbers, target);
    if (index == -1) {
        cout << "Binary Search: Element " << target << " not found." << endl;
    }
    
    return 0;
}
