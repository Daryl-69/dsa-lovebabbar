#include<iostream>
#include<stack>
using namespace std;

class stack {
   public:
   int *arr;
   int top;
   int size;
//making the stack:
   stack(int size){  //constructor
   this -> size=size;  //allocating this int size to the one in the class
   arr=new int[size]; //giving the array its position
   top=-1;
   }

void push (int element){
   if (size-top > 1){ //the size of the array/stack - top element>1
      top++ //moving my +1
      arr[top]=element;
   }
      else{
         cout<<"stack overflow"<<endl;

      }
}

void pop() {
if (top >=0){  //if the size of top element >=0
   top--;    //removing that element
}
else{
   cout<<"stack undreflow"<<endl;
}
}
int peek(){
   if  (top >=0)
return arr[top];

else{
   cout<<"stack is empty"<<endl;
   return -1
}
}
bool isEmpty()

};


int main()
{

   stack st(5);
st.push(2);
st.push(3);
st.push(4);
cout<<st.top()<<endl;


/*
 cout<<"printing the top element"<<s.top()<<endl;
 if (s.empty()){
    cout<<"stack is  empty"<<endl;
 }
 else {
     cout<<"stack is not empty "<<endl;}

     cout<<"size of the stack is"<<s.size()<<endl;
     */


     return 0;
}





