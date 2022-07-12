#include<iostream>
using namespace std;
int main()
{
    int i, j,n;
    cin>>n;
    i=n;
    while(i>=1)
    {
        j=1;
        while(j<=i) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i--;
    }
    return 0;
}
------------------------------------------------------------
  OUTPUT
4

4444
333
22
1
