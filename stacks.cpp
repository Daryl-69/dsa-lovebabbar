#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack <int> s;
s.push(2);
s.push(3);
s.push(4);

s.pop();

 cout<<"printing the top element"<<s.top()<<endl;
 if (s.empty()){
    cout<<"stack is  empty"<<endl;
 }
 else {
     cout<<"stack is not empty "<<endl;}

     cout<<"size of the stack is"<<s.size()<<endl;
     
     return 0;
}



 
    
