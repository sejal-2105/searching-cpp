#include <iostream>
#include <vector>
using namespace std;
int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    vector<int> numbers = {34, 1, 89, 5, 42, 10};
    int target = 42;
    int index = linearSearch(numbers, target);
    cout << "Array: ";
    for (int n : numbers) {
        cout << n << " ";
    }
    cout << endl;
    if (index != -1) {
        cout << "Linear Search: Element " << target << " found at index " << index << endl;
    } else {
        cout << "Linear Search: Element " << target << " not found." << endl;
    }
    target = 99; 
    index = linearSearch(numbers, target);
    if (index == -1) {
        cout << "Linear Search: Element " << target << " not found." << endl;
    }
    return 0;
}
