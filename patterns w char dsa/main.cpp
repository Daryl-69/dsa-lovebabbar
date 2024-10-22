/*
#include <iostream>
using namespace std;
int main()
{
    int n; int k;
    cin>>n;
    int r=1;
    char ch;

    while (r<=n)
    {
        int c=1;
        while (c<=n)
  {
       ch=('A' +r+c-2);
  cout <<ch;
  c++;
    }
    cout<<endl;
    r++;
    }
    return 0;
}
     c=1  c=2  c=3  c=4
r=1  A     B    C     D

r=2  B     C    D     E

r=3  C     D    E     F

r=4  D     E    F     G   */

/*
To print
   *
  **
 ***
****
*/
#include <iostream>
using namespace std;
int main()
{
    int n; int k;
    cin>>n;
    int r=1;


    while (r<=n)
    {
        int space=n-r;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int c=1;
        while (c<=r)
        {
            cout<<"*";
            c++;
        }
        cout<<endl;
        r++;
    }
}




