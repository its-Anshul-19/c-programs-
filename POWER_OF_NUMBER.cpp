/*C++ program to print power of a number */
-------------------------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int x,n, ans=1;
    cin >> x >> n;
    if(n==0){
        cout << "1" <<endl;
    }else if(x==0){
        cout << "0" <<endl;
    }else {
        while(n--){
            ans = ans *x;
        }
        cout << ans <<endl;
    }
	
}
