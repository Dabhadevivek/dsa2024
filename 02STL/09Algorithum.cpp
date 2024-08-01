#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void printDouble(int a) {
    cout << a * 2 << endl;
}

bool checkEven(int a) {
    return a % 2 == 0;
}

int main() {
    vector<int> arr(10);
    int n = 10;
    for (int i = 0; i < n; i++) {
        arr[i] = i;
    }

    // Apply the printDouble function to each element in arr
    // for_each(arr.begin(), arr.end(), printDouble);

    int target = 66;

    // Find the first occurrence of target in arr
    auto it = find(arr.begin(), arr.end(), target);
    if (it != arr.end()) {
        cout << *it << endl;
    } else {
        cout << "Target not found" << endl;
    }
    // Output: Target not found

    // Find the first even number in arr
    auto it2 = find_if(arr.begin(), arr.end(), checkEven);
    if (it2 != arr.end()) {
        cout << "First even number: " << *it2 << endl;
    } else {
        cout << "No even number found" << endl;
    }
    // Output: First even number: 0

    // Count the number of times target appears in arr
    int countTarget = count(arr.begin(), arr.end(), target);
    cout << "Number of times target appears: " << countTarget << endl;
    // Output: Number of times target appears: 0

    // Count the number of even numbers in arr
    int countEven = count_if(arr.begin(), arr.end(), checkEven);
    cout << "Number of even numbers: " << countEven << endl;
    // Output: Number of even numbers: 5

    // Uncomment the following loop to print all elements of arr
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << endl;
    // }

    // Modifying specific elements
    arr[4] = 10;
    arr[5] = 20;

    // Sorting the array
    sort(arr.begin(), arr.end());
    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    // Output:
    // Sorted array:
    // 0
    // 1
    // 2
    // 3
    // 4
    // 10
    // 6
    // 7
    // 8
    // 20

    cout << endl;
    cout << endl;

    // Reversing the array
    reverse(arr.begin(), arr.end());
    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    // Output:
    // Reversed array:
    // 20
    // 8
    // 7
    // 6
    // 10
    // 4
    // 3
    // 2
    // 1
    // 0

    cout << endl;
    cout << endl;

    // Rotating the array so that the element at position 2 becomes the first element
    rotate(arr.begin(), arr.begin() + 2, arr.end());
    cout << "Array after rotation:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    // Output:
    // Array after rotation:
    // 7
    // 6
    // 10
    // 4
    // 3
    // 2
    // 1
    // 0
    // 20
    // 8

    // Sorting the array again
    sort(arr.begin(), arr.end());
    arr[9] = 9;

    // Removing consecutive duplicate elements
    auto ita = unique(arr.begin(), arr.end());
    arr.erase(ita, arr.end());
    cout << "Array after removing consecutive duplicates:" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    // Output:
    // Array after removing consecutive duplicates:
    // 0
    // 1
    // 2
    // 3
    // 4
    // 6
    // 7
    // 9
    // 10

    // Partitioning the array so that all even numbers come before all odd numbers
    auto part = partition(arr.begin(), arr.end(), checkEven);
    cout << "Array after partitioning (evens before odds):" << endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
    // Output:
    // Array after partitioning (evens before odds):
    // 0
    // 2
    // 4
    // 6
    // 10
    // 3
    // 7
    // 9
    // 1

    return 0;
}
