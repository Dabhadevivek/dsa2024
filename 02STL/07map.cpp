#include <iostream>
#include <map>         // For std::map
#include <unordered_map> // For std::unordered_map
#include <string>
#include <algorithm>

// Basic usage of std::map (ordered map)
void basicMapUsage() {
    // Declare a map that associates strings with integers
    std::map<std::string, int> myMap;

    // Insert elements using operator[] - O(log n) per insertion
    myMap["apple"] = 5;
    myMap["banana"] = 3;
    myMap["orange"] = 10;

    // Insert elements using insert method - O(log n) per insertion
    myMap.insert(std::make_pair("grape", 7));

    // Accessing elements - O(log n)
    std::cout << "Apple count: " << myMap["apple"] << std::endl;

    // Iterating over the map - O(n)
    std::cout << "Basic Map Iteration:" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Custom comparator for std::map (ordered map)
struct CustomComparator {
    bool operator()(const std::string& lhs, const std::string& rhs) const {
        return lhs.length() < rhs.length(); // Sort by string length
    }
};

void customComparatorUsage() {
    // Map with a custom comparator (sorted by string length)
    std::map<std::string, int, CustomComparator> customMap;

    // Insert elements - O(log n) per insertion
    customMap["apple"] = 5;
    customMap["banana"] = 3;
    customMap["kiwi"] = 1;
    customMap["grape"] = 7;

    // Iterating over the map - O(n)
    std::cout << "Custom Comparator Map Iteration (sorted by string length):" << std::endl;
    for (const auto& pair : customMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Usage of std::unordered_map (unordered map)
void unorderedMapUsage() {
    // Declare an unordered map that associates strings with integers
    std::unordered_map<std::string, int> myUnorderedMap;

    // Insert elements using operator[] - Average O(1) per insertion
    myUnorderedMap["apple"] = 5;
    myUnorderedMap["banana"] = 3;
    myUnorderedMap["orange"] = 10;

    // Insert elements using insert method - Average O(1) per insertion
    myUnorderedMap.insert(std::make_pair("grape", 7));

    // Accessing elements - Average O(1)
    std::cout << "Apple count (unordered): " << myUnorderedMap["apple"] << std::endl;

    // Iterating over the map - O(n), order not guaranteed
    std::cout << "Unordered Map Iteration:" << std::endl;
    for (const auto& pair : myUnorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Advanced usage: Finding, counting, and erasing elements
void findCountErase() {
    std::map<std::string, int> myMap = {
        {"apple", 5},
        {"banana", 3},
        {"orange", 10},
        {"grape", 7}
    };

    // Find an element - O(log n)
    auto it = myMap.find("banana");
    if (it != myMap.end()) {
        std::cout << "Found: " << it->first << " -> " << it->second << std::endl;
    } else {
        std::cout << "Banana not found" << std::endl;
    }

    // Count occurrences of a key - O(log n)
    std::cout << "Count of 'apple': " << myMap.count("apple") << std::endl;

    // Erase an element by key - O(log n)
    myMap.erase("orange");

    // Iterating over the map after erasure - O(n)
    std::cout << "Map after erasing 'orange':" << std::endl;
    for (const auto& pair : myMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Advanced usage: Range-based and copy operations
void rangeAndCopyOperations() {
    std::map<std::string, int> originalMap = {
        {"apple", 5},
        {"banana", 3},
        {"orange", 10},
        {"grape", 7}
    };

    // Copy constructor - O(n)
    std::map<std::string, int> copyMap(originalMap);

    // Range constructor (copying only a subset) - O(n)
    std::map<std::string, int> rangeMap(++originalMap.begin(), originalMap.end());

    // Iterating over the copied map - O(n)
    std::cout << "Copied Map Iteration:" << std::endl;
    for (const auto& pair : copyMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Iterating over the range-constructed map - O(n)
    std::cout << "Range Map Iteration:" << std::endl;
    for (const auto& pair : rangeMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

// Advanced usage: Checking if a key exists and modifying values
void keyExistenceAndModification() {
    std::map<std::string, int> myMap = {
        {"apple", 5},
        {"banana", 3},
        {"orange", 10},
        {"grape", 7}
    };

    // Checking if a key exists using find - O(log n)
    if (myMap.find("kiwi") != myMap.end()) {
        std::cout << "'kiwi' exists in the map." << std::endl;
    } else {
        std::cout << "'kiwi' does not exist in the map." << std::endl;
    }

    // Modifying values associated with a key - O(log n)
    myMap["banana"] += 2;
    std::cout << "Updated 'banana' count: " << myMap["banana"] << std::endl;
}

int main() {
    basicMapUsage();            // Demonstrates basic usage of std::map
    customComparatorUsage();    // Demonstrates usage with a custom comparator for std::map
    unorderedMapUsage();        // Demonstrates basic usage of std::unordered_map
    findCountErase();           // Demonstrates find, count, and erase operations
    rangeAndCopyOperations();   // Demonstrates range and copy operations
    keyExistenceAndModification(); // Demonstrates checking key existence and modifying values

    return 0;
}
