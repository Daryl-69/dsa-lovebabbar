#include <stack>
#include<array>
#include<iostream>
using namespace std;
int main(){
   //int Array[4]={a,b,c,d} //normal ay of inserting array
    array<int,4> a={1,2,3,4}; //stl waay of unserting array

int size =a.size();

for(int i=0;i<size;i++){
    cout<<a[i]<<endl;
}
cout<<"element at 2nd index " <<a.at(2)<<endl;
cout<<"enply or not "<<a.empty()<<endl; //replies this is bianary
cout<<"first element"<<a.front()<<endl;

}

