//implimenting 2stack in an array
//stack1 in the array will be inserted from right to left
//whereas stack 2 will go from left to right
//ie it will start from size, then size-1
//till top..this is the best methord becuase of the space utilization
  

//IMPLMENTING A STACK IN AN ARRAY

#include<iostream>
#include<stack>  // Standard stack is included, but we have our own stack class
using namespace std;

class twoStack {  // Renamed the class to avoid conflict
   public:
   int *arr;
   int top1;
   int top2;
   int size;

   // Constructor
   MyStack(int size) {
      this->size = size;
      arr = new int[size];
      top1 = -1;
      top2 = size; 
   }

   // Push operation STACK1
   void push1(int element) {
      if (top2 - top1 > 1) {
         top++;  // Fixed missing semicolon
         arr[top1] = element;
      } else {
         cout << "Stack overflow" << endl;
      }
   }
   //push oparation in stack2
    void push2(int element) {
      if (top2 - top1 > 1) {
         top--;  // Fixed missing semicolon
         arr[top2] = element;
      } 
   }
   
   // Pop operation
   void pop1() {
      if (top1 >= 0) {
        int element=arr[top1];
         top1--;  // Removes the top element
      } else {
         return -1;
      }
   }
   
void pop2() {
      if (top2 <size) {
        int element=arr[top2];
         top2++;  // Removes the top element
      } else {
        return -1;
      }
   }
}; 
/*
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
   

   return 0;
}
 */