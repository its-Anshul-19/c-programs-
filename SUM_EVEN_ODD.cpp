/*Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.*/
-----------------------------------------------------------------------------------------------------------------




#include <iostream>
using namespace std;

int main (){
    int n ;
   //cout << "Enter the number" << endl;
    cin >> n;
    int i = 0;
    int sume = 0;
    int sumo = 0;
        while (n!=0)
        {
            int i = n%10;
            n = n/10;
            if(i%2==0)
            {
                sume = sume + i;
            }
            else if(i%2!=0)
            {
                sumo = sumo + i;
            }
            i++;
            
        }
    cout<<sume<<" "<<sumo;
}
