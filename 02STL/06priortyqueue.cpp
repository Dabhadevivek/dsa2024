#include <iostream>
#include <queue>
#include <vector>
#include <functional>

// Example 1: Basic Max-Heap (Default behavior)
void maxHeapExample() {
    std::priority_queue<int> pq;

    // Inserting elements
    pq.push(10);
    pq.push(20);
    pq.push(5);

    // Elements are retrieved in descending order
    std::cout << "Max-Heap Example: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Accesses the maximum element
        pq.pop();                     // Removes the maximum element
    }
    std::cout << std::endl;
}

// Example 2: Min-Heap
void minHeapExample() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;

    // Inserting elements
    pq.push(10);
    pq.push(20);
    pq.push(5);

    // Elements are retrieved in ascending order
    std::cout << "Min-Heap Example: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " "; // Accesses the minimum element
        pq.pop();                     // Removes the minimum element
    }
    std::cout << std::endl;
}

// Example 3: Custom Comparator for User-Defined Types
struct Person {
    std::string name;
    int age;

    Person(std::string n, int a) : name(n), age(a) {}
};

// Custom comparator for Person
struct ComparePerson {
    bool operator()(const Person& p1, const Person& p2) {
        // Higher age has higher priority
        return p1.age < p2.age;
    }
};

void customComparatorExample() {
    std::priority_queue<Person, std::vector<Person>, ComparePerson> pq;

    // Inserting elements
    pq.push(Person("Alice", 30));
    pq.push(Person("Bob", 25));
    pq.push(Person("Charlie", 35));

    // Elements are retrieved based on custom comparator (by age)
    std::cout << "Custom Comparator Example: ";
    while (!pq.empty()) {
        Person p = pq.top();
        std::cout << "(" << p.name << ", " << p.age << ") ";
        pq.pop();
    }
    std::cout << std::endl;
}

// Example 4: Using Lambda as Comparator for Custom Ordering
void lambdaComparatorExample() {
    auto cmp = [](int left, int right) { return left > right; };
    std::priority_queue<int, std::vector<int>, decltype(cmp)> pq(cmp);

    // Inserting elements
    pq.push(10);
    pq.push(20);
    pq.push(5);

    // Elements are retrieved in ascending order (custom order)
    std::cout << "Lambda Comparator Example: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;
}

int main() {
    maxHeapExample();          // Demonstrates a max-heap
    minHeapExample();          // Demonstrates a min-heap
    customComparatorExample(); // Demonstrates custom comparator for user-defined type
    lambdaComparatorExample(); // Demonstrates custom comparator using lambda

    return 0;
}
