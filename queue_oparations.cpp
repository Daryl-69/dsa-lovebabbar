/*Enqueue: Add an element at the rear.
Dequeue: Remove an element from the front.
Peek/Front: View the element at the front.
IsEmpty: Check if the queue is empty.
IsFull: Check if the queue is full.*/
#include <iostream>
#define MAX 5  // Define a maximum size for the queue

class Queue {
private:
    int arr[MAX];  // Array to store the queue elements
    int front;     // Points to the front of the queue
    int rear;      // Points to the rear of the queue
    int size;      // Tracks the number of elements in the queue

public:
    // Constructor to initialize the queue
    Queue() {
        front = 0;
        rear = -1;
        size = 0;
    }

    // Check if the queue is full
    bool isFull() {
        return size == MAX;
    }

    // Check if the queue is empty
    bool isEmpty() {
        return size == 0;
    }

    // Enqueue operation to add an element at the rear
    void enqueue(int element) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue " << element << std::endl;
            return;
        }
        rear = rear + 1;  // Move rear forward
        arr[rear] = element;  // Insert element at the rear
        size++;  // Increase the size of the queue
        std::cout << element << " enqueued successfully." << std::endl;
    }

    // Dequeue operation to remove an element from the front
    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue." << std::endl;
            return;
        }
        std::cout << arr[front] << " dequeued successfully." << std::endl;
        front = front + 1;  // Move front forward
        size--;  // Decrease the size of the queue

        // Reset front and rear if the queue becomes empty
        if (isEmpty()) {
            front = 0;
            rear = -1;
        }
    }

    // Peek operation to see the front element
    int peek() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Nothing to peek." << std::endl;
            return -1;
        }
        return arr[front];
    }

    // Return the current size of the queue
    int currentSize() {
        return size;
    }
};
int main() {
    Queue q;

    q.enqueue(10);  // Output: 10 enqueued successfully.
    q.enqueue(20);  // Output: 20 enqueued successfully.
    q.enqueue(30);  // Output: 30 enqueued successfully.

    std::cout << "Front element is: " << q.peek() << std::endl;  // Output: 10

    q.dequeue();  // Output: 10 dequeued successfully.
    std::cout << "Front element after dequeue is: " << q.peek() << std::endl;  // Output: 20

    q.enqueue(40);  // Output: 40 enqueued successfully.
    q.enqueue(50);  // Output: 50 enqueued successfully.
    q.enqueue(60);  // Output: Queue is full. Cannot enqueue 60.

    while (!q.isEmpty()) {
        std::cout << "Dequeued: " << q.peek() << std::endl;
        q.dequeue();
    }

    return 0;
}
