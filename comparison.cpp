#include <iostream>
using namespace std;

int main(){

    int a ,b;
    
    cout << "enter two numbers.." << endl;
    cout << "Enter the value of a " << endl;


    cin >> a ;

    cout << " enter the value of b" << endl;
    cin >> b ;



    cout << " comparison---------------------------------------------------------------------------------------------------" << endl;




    if (a == b){
        cout << " hey these are equal" << endl;
    } else if ( a < b){
        cout << "A is smaller" << endl;
    } else {
        cout << "a is greater" << endl;

    }
    }

//------------------------------------------------------------------------------------------------------------------------
//SECOND TYPE


/*
    if (a == b) {
        cout << "hey,these are equal" << endl;
    }   else {
        if (a<b){
            cout << " a  is smaller" << endl;
    }   else {
            cout << "a is greater" << endl;

        }
        }
    }
    */


//--------------------------------------------------------------------------------------------------------------------------
//FIRST TYPE


   /*
    if (a==b) {
        cout << "hey,these are equal" << endl;
    }   else {
        cout << " not equal" << endl;
    }
    }*/