//IMPLMENTING A STACK IN AN ARRAY

#include<iostream>
#include<stack>  // Standard stack is included, but we have our own stack class
using namespace std;

class MyStack {  // Renamed the class to avoid conflict
   public:
   int *arr;
   int top;
   int size;

   // Constructor
   MyStack(int size) {
      this->size = size;
      arr = new int[size];
      top = -1;
   }

   // Push operation
   void push(int element) {
      if (size - top > 1) {
         top++;  // Fixed missing semicolon
         arr[top] = element;
      } else {
         cout << "Stack overflow" << endl;
      }
   }

   // Pop operation
   void pop() {
      if (top >= 0) {
         top--;  // Removes the top element
      } else {
         cout << "Stack underflow" << endl;
      }
   }

   // Peek operation
   int peek() {
      if (top >= 0)
         return arr[top];
      else {
         cout << "Stack is empty" << endl;
         return -1;  // Fixed missing semicolon
      }
   }

   // Check if stack is empty
   bool isEmpty() {
      return top == -1;
   }
};

int main() {
   MyStack st(5);  // Using MyStack instead of conflicting stack name
   st.push(2);
   st.push(3);
   st.push(4);
   cout << st.peek() << endl; 
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;
   st.pop();
   cout<<st.peek()<<endl;

   /*
   cout << "Printing the top element: " << st.peek() << endl;
   if (st.isEmpty()) {
      cout << "Stack is empty" << endl;
   } else {
      cout << "Stack is not empty" << endl;
   }

   // Optionally implement size if required:
   // cout << "Size of the stack is: " << st.size() << endl;
   */

   return 0;
}
 