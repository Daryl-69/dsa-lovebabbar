/*A Doubly Ended Queue (Deque), short for Double-Ended Queue, is a 
type of queue in which elements can be added or removed from both ends (front and back). This flexibility 
makes deques more versatile than a simple queue or stack.*/
#include <iostream>
#include <deque>

int main() {
    std::deque<int> dq;

    // Add elements to the front and back
    dq.push_back(10);  // Back: 10
    dq.push_front(20); // Front: 20 -> 10
    dq.push_back(30);  // Back: 20 -> 10 -> 30
    dq.push_front(40); // Front: 40 -> 20 -> 10 -> 30

    std::cout << "Front element: " << dq.front() << std::endl;  // Output: 40
    std::cout << "Back element: " << dq.back() << std::endl;    // Output: 30

    // Remove elements from the front and back
    dq.pop_front();  // Removes 40, deque becomes: 20 -> 10 -> 30
    dq.pop_back();   // Removes 30, deque becomes: 20 -> 10

    std::cout << "Front element after pop_front: " << dq.front() << std::endl;  // Output: 20
    std::cout << "Back element after pop_back: " << dq.back() << std::endl;    // Output: 10

    // Check size and if the deque is empty
    std::cout << "Size of deque: " << dq.size() << std::endl;  // Output: 2
    std::cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << std::endl;  // Output: No

    return 0;
}
