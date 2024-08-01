#include <iostream>
#include <stack>
#include <vector>
#include <deque>

// Example 1: Iteration by Copying to a Vector
void iterationByCopyingToVector() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Copy elements to a vector for iteration
    std::vector<int> v;
    std::stack<int> temp = s;
    while (!temp.empty()) {
        v.push_back(temp.top());
        temp.pop();
    }

    // Iterate through the vector (note: elements are in reverse order)
    std::cout << "Iteration by Copying to Vector: ";
    for (auto it = v.rbegin(); it != v.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// Example 2: Iteration by Using a Temporary Stack
void iterationByUsingTemporaryStack() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Use a temporary stack for iteration
    std::stack<int> temp = s;
    std::cout << "Iteration by Using Temporary Stack: ";
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

// Example 3: Using Deque for Easy Access and Iteration
void usingDequeForIteration() {
    std::deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);

    // Iterate through the deque
    std::cout << "Using Deque for Iteration: ";
    for (const int &elem : dq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Example 4: Iteration using STL Stack and Pop for Processing
void iterationUsingStackAndPop() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    // Process elements and remove them from the stack
    std::cout << "Iteration using Stack and Pop: ";
    while (!s.empty()) {
        std::cout << s.top() << " ";
        s.pop();
    }
    std::cout << std::endl;
}

// Example 5: Using a Custom Stack Class with Iteration Capability
template<typename T>
class IterableStack {
private:
    std::deque<T> dq;

public:
    void push(const T& value) {
        dq.push_back(value);
    }

    void pop() {
        if (!dq.empty()) {
            dq.pop_back();
        }
    }

    T& top() {
        return dq.back();
    }

    bool empty() const {
        return dq.empty();
    }

    auto begin() {
        return dq.rbegin();
    }

    auto end() {
        return dq.rend();
    }
};

void iterationUsingCustomStack() {
    IterableStack<int> is;
    is.push(1);
    is.push(2);
    is.push(3);
    is.push(4);

    // Iterate using the custom stack's iterators
    std::cout << "Iteration using Custom Stack: ";
    for (const int &elem : is) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Additional functionality: Reverse a Stack
void reverseStack(std::stack<int>& s) {
    std::stack<int> temp;
    while (!s.empty()) {
        temp.push(s.top());
        s.pop();
    }
    s = temp;
}

void demonstrateReverseStack() {
    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    std::cout << "Original Stack (top to bottom): ";
    iterationByUsingTemporaryStack(); // Use the temporary stack iteration to print

    reverseStack(s);

    std::cout << "Reversed Stack (top to bottom): ";
    std::stack<int> temp = s;
    while (!temp.empty()) {
        std::cout << temp.top() << " ";
        temp.pop();
    }
    std::cout << std::endl;
}

int main() {
    iterationByCopyingToVector();
    iterationByUsingTemporaryStack();
    usingDequeForIteration();
    iterationUsingStackAndPop();
    iterationUsingCustomStack();
    demonstrateReverseStack();

    return 0;
}
