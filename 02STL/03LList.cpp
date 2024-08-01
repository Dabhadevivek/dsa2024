#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> lnam;

    // Adding elements to the list
    lnam.push_back(12);
    lnam.push_back(13);
    lnam.push_back(14);
    lnam.push_front(220);
    lnam.push_front(221);

    // Printing the list elements
    cout << "List elements: ";
    for (int value : lnam) {
        cout << value << " ";
    }
    cout << endl;

    // Inserting elements
    auto it = lnam.begin();
    advance(it, 2); // Move iterator to the 3rd position (0-based index)
    lnam.insert(it, 999); // Insert 999 at the 3rd position

    // Printing the list after insertion
    cout << "List after insertion: ";
    for (int value : lnam) {
        cout << value << " ";
    }
    cout << endl;

    // Deleting elements
    it = lnam.begin();
    advance(it, 3); // Move iterator to the 4th position (0-based index)
    lnam.erase(it); // Remove element at the 4th position

    // Printing the list after deletion
    cout << "List after deletion: ";
    for (int value : lnam) {
        cout << value << " ";
    }
    cout << endl;

    // Accessing the first and last elements
    cout << "First element: " << lnam.front() << endl;
    cout << "Last element: " << lnam.back() << endl;

    // Getting the size of the list
    cout << "Size of the list: " << lnam.size() << endl;

    // Clearing the list
    lnam.clear();
    cout << "List after clearing: ";
    for (int value : lnam) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
