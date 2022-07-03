#include <iostream>
using namespace std;

int main(){

int f;
cout << "Enter fah value" << endl;
cin >> f;

int c = (5.0/9)*(f-32);
cout << c << endl;

int r= 10%3;
cout << 10%3 << endl;
cout << c << endl;

int a;
int b;
cout <<"enter a and b" << endl;
cin >> a >> b;

bool isEqual =  (a==b);
bool isAGreater = (a>b);
bool isALess = (a<b);
cout << "are they equal" << isEqual << endl;
cout << "is A Greater" << isAGreater << endl;
cout << "is A  Less" << isALess << endl;
}