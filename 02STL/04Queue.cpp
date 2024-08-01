#include <iostream>
#include <queue>
#include <vector>
#include <deque>

// Example 1: Iteration by Copying to a Vector
void iterationByCopyingToVector() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Copy elements to a vector for iteration
    std::vector<int> v;
    while (!q.empty()) {
        v.push_back(q.front());
        q.pop();
    }

    // Iterate through the vector
    std::cout << "Iteration by Copying to Vector: ";
    for (const int &elem : v) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Example 2: Iteration by Using a Temporary Queue
void iterationByUsingTemporaryQueue() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Use a temporary queue for iteration
    std::queue<int> temp = q;
    std::cout << "Iteration by Using Temporary Queue: ";
    while (!temp.empty()) {
        std::cout << temp.front() << " ";
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

// Example 4: Iteration using STL Queue and Pop for Processing
void iterationUsingQueueAndPop() {
    std::queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    // Process elements and remove them from the queue
    std::cout << "Iteration using Queue and Pop: ";
    while (!q.empty()) {
        std::cout << q.front() << " ";
        q.pop();
    }
    std::cout << std::endl;
}

// Example 5: Using a Custom Queue Class with Iteration Capability
template<typename T>
class IterableQueue {
private:
    std::deque<T> dq;

public:
    void push(const T& value) {
        dq.push_back(value);
    }

    void pop() {
        if (!dq.empty()) {
            dq.pop_front();
        }
    }

    T& front() {
        return dq.front();
    }

    bool empty() const {
        return dq.empty();
    }

    auto begin() {
        return dq.begin();
    }

    auto end() {
        return dq.end();
    }
};

void iterationUsingCustomQueue() {
    IterableQueue<int> iq;
    iq.push(1);
    iq.push(2);
    iq.push(3);
    iq.push(4);

    // Iterate using the custom queue's iterators
    std::cout << "Iteration using Custom Queue: ";
    for (const int &elem : iq) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main() {
    iterationByCopyingToVector();
    iterationByUsingTemporaryQueue();
    usingDequeForIteration();
    iterationUsingQueueAndPop();
    iterationUsingCustomQueue();

    return 0;
}
