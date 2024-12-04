#include<iostream>
#include<time.h>

using namespace std;

int main() {

    cout << "\n\t\t\t:: ROCK , PAPER , SCISSORS ::" << endl;
    int UserInput;
    cout << " 1. Select ROCK \n 2. Select PAPER \n 3. Select SCISSORS \n 4. Select Close Game\n";

    do {
        cout << "Your Choice : ";
        cin >> UserInput;
        if (UserInput == 1) {
            cout << "( You Selects Rock )";
        }

        if (UserInput == 2) {
            cout << "( You Selects Paper )";
        }

        if (UserInput == 3) {
            cout << "( You Selects Scissors )";
        }

        if (UserInput == 4) {
            cout << " GAME ENDED ";
        }

        int ComInput = rand() % 3;

        if (UserInput != 4) {
            if (ComInput == 1) {
                cout << "( Computer Selects Rock )  ";
            }

            if (ComInput == 2) {
                cout << "( Computer Selects Paper )  ";
            }

            if (ComInput == 3) {
                cout << "( Computer Selects Scissors )  ";
            }
        }

        cout << endl;

        if (UserInput == ComInput) {
            cout << " Match Draw ! ";
        }
        else if (UserInput == 1 && ComInput == 3 || UserInput == 2 && ComInput == 1 || UserInput == 3 && ComInput == 2) {
            cout << " Hurray ! You Win ";
        }
        else if (UserInput == 1 && ComInput == 2 || UserInput == 2 && ComInput == 3 || UserInput == 3 && ComInput == 1) {
            cout << " Computer Wins ! ";
        }
        if (UserInput != 4) {
            cout << "\nWanna Try again ? If No Enter 4 ";
        }
    } while (UserInput != 4);

    return 0;
}
