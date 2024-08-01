#include <iostream>
#include <set>           // For std::set
#include <unordered_set> // For std::unordered_set
#include <string>
#include <algorithm>     // For std::set_union, std::set_intersection, std::set_difference
#include <iterator>      // For std::inserter

// Basic usage of std::set (ordered set)
void basicSetUsage() {
    // Declare a set of integers
    std::set<int> mySet;

    // Insert elements - O(log n) per insertion
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);

    // Attempt to insert a duplicate element - No effect, as sets do not allow duplicates
    mySet.insert(10);

    // Check if an element exists - O(log n)
    if (mySet.find(5) != mySet.end()) {
        std::cout << "5 is in the set." << std::endl;
    }

    // Iterating over the set - O(n)
    std::cout << "Ordered Set Iteration:" << std::endl;
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Custom comparator for std::set (ordered set)
struct CustomComparator {
    bool operator()(const std::string& lhs, const std::string& rhs) const {
        return lhs.length() < rhs.length(); // Sort by string length
    }
};

void customComparatorUsage() {
    // Set with a custom comparator (sorted by string length)
    std::set<std::string, CustomComparator> customSet;

    // Insert elements - O(log n) per insertion
    customSet.insert("apple");
    customSet.insert("banana");
    customSet.insert("kiwi");
    customSet.insert("grape");

    // Iterating over the set - O(n)
    std::cout << "Custom Comparator Set Iteration (sorted by string length):" << std::endl;
    for (const std::string& fruit : customSet) {
        std::cout << fruit << " ";
    }
    std::cout << std::endl;
}

// Usage of std::unordered_set (unordered set)
void unorderedSetUsage() {
    // Declare an unordered set of integers
    std::unordered_set<int> myUnorderedSet;

    // Insert elements - Average O(1) per insertion
    myUnorderedSet.insert(10);
    myUnorderedSet.insert(5);
    myUnorderedSet.insert(20);

    // Attempt to insert a duplicate element - No effect, as sets do not allow duplicates
    myUnorderedSet.insert(10);

    // Check if an element exists - Average O(1)
    if (myUnorderedSet.find(5) != myUnorderedSet.end()) {
        std::cout << "5 is in the unordered set." << std::endl;
    }

    // Iterating over the unordered set - O(n), order not guaranteed
    std::cout << "Unordered Set Iteration:" << std::endl;
    for (int num : myUnorderedSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Advanced usage: Finding and erasing elements in sets
void findAndErase() {
    std::set<int> mySet = {10, 5, 20, 15};

    // Find an element - O(log n)
    auto it = mySet.find(15);
    if (it != mySet.end()) {
        std::cout << "Found: " << *it << std::endl;
    }

    // Erase an element by value - O(log n)
    mySet.erase(5);

    // Iterating over the set after erasure - O(n)
    std::cout << "Set after erasing 5:" << std::endl;
    for (int num : mySet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// Advanced usage: Union, intersection, and difference of sets
void setOperations() {
    std::set<int> setA = {1, 2, 3, 4};
    std::set<int> setB = {3, 4, 5, 6};

    // Union - O(n)
    std::set<int> unionSet;
    std::set_union(setA.begin(), setA.end(), setB.begin(), setB.end(),
                   std::inserter(unionSet, unionSet.end()));
    std::cout << "Union of setA and setB:" << std::endl;
    for (int num : unionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Intersection - O(n)
    std::set<int> intersectionSet;
    std::set_intersection(setA.begin(), setA.end(), setB.begin(), setB.end(),
                          std::inserter(intersectionSet, intersectionSet.end()));
    std::cout << "Intersection of setA and setB:" << std::endl;
    for (int num : intersectionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Difference (setA - setB) - O(n)
    std::set<int> differenceSet;
    std::set_difference(setA.begin(), setA.end(), setB.begin(), setB.end(),
                        std::inserter(differenceSet, differenceSet.end()));
    std::cout << "Difference of setA and setB (setA - setB):" << std::endl;
    for (int num : differenceSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main() {
    basicSetUsage();            // Demonstrates basic usage of std::set
    customComparatorUsage();    // Demonstrates usage with a custom comparator for std::set
    unorderedSetUsage();        // Demonstrates basic usage of std::unordered_set
    findAndErase();             // Demonstrates find and erase operations
    setOperations();            // Demonstrates union, intersection, and difference operations

    return 0;
}
