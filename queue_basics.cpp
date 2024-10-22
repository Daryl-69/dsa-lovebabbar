#include <iostream>
#include <queue>

int main() {
    std::queue<int> q;

    // Adding elements to the queue
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Front element: " << q.front() << std::endl;  // Output: 10
    std::cout << "Back element: " << q.back() << std::endl;    // Output: 30

    // Removing the front element
    q.pop();
    
    std::cout << "Front element after pop: " << q.front() << std::endl;  // Output: 20

    std::cout << "Size of queue: " << q.size() << std::endl;  // Output: 2

    return 0;
}
