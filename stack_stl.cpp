#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s; //making a stack

s.push("messi2");
s.push("messi3");
    s.push("messi6");

    cout<<"top element "<<s.top()<<endl;

    s.pop();
    cout<<"top element after popping "<<s.top()<<endl;
    cout<<" size "<<s.size()<<endl;
    cout<<" empty or not "<<s.empty()<<endl;
} // namespace std;

    


