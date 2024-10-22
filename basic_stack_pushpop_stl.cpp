#include <iostream>
#include <stack>  // Include the stack library

using namespace std;  // Now we can use cout directly without std::

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Push elements into the stack
    myStack.push(10);  // Stack: [10]
    myStack.push(20);  // Stack: [10, 20]
    myStack.push(30);  // Stack: [10, 20, 30]

    // Display the top element using cout
    cout << "Top element: " << myStack.top() << endl;  // Output: 30

    // Pop the top element from the stack
    myStack.pop();  // Stack: [10, 20]

    // Display the top element after pop
    cout << "Top element after pop: " << myStack.top() << endl;  // Output: 20

    // Check if the stack is empty
    if (myStack.empty()) {
        cout << "The stack is empty." << endl;
    } else {
        cout << "The stack is not empty." << endl;
    }

    return 0;
}
