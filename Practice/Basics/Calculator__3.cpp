#include<iostream>
using namespace std ;
int main(){
     int a , b , cal ;
        cout << "Program for calculating Sum and Difference using switch statement :: " << endl;
        cout << "Enter first Number : ";
        cin >> a ;
        cout << "Enter second Number : ";
        cin >> b ;
        cout << "\n:: Enter 1 for (+) and 2 for (-) ::" <<endl;
        cin >> cal;
            int sum = a + b;
        int minus = a - b;  

// Using Switch Statement 
        switch (cal) {
            case 1:
                cout << a << " + " << b << " = " << sum ;
                break;

            case 2:
                cout << a << " - " << b << " = " << minus;
                break;
            default:
                cout<< "PLease Re-Read User Manual . Thankyou! ";
        }
    return 0 ; 
}