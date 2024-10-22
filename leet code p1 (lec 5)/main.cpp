#include<iostream>
using namespace std;

class suganigadik
{

public:

void func1(int array[], int length)
{
    int sum=0;
    int product =1;
    for (int i = 0; i <length; i++)
    {
        sum+=array[i];
    }

    for (int i = 0; i < length; i++)
    {
        product*=array[i];
    }
}
};

int main()
{
    int arr[] = {3,4,66};
    suganigadik func1(arr,3);
    return 0;
}
