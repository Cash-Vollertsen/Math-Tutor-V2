 /************************************************************************************************************************
    Program.......:MathTutorV1
    Programmers...:Cash Vollertsen and Ethan Hoge
    Date..........:9/22/25
    Github Repo...:https://github.com/Cash-Vollertsen/Math-Tutor-V2
    Description...:This is a much more complex math tutor than v1. We will have randomly generated numbers for each
    and a random math operator. Though for subtraction there will be no negatives numbers and divisons won't be fractions.
    **********************************************************************************************************************/

#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <bits/ranges_uninitialized.h>
 using namespace std;


int main() {
    double useranswer;
    double ans;
    int rando2 = 0;
    int rando1= 0;
    int mathVar = 0;
    string mathSymbol;

    srand(time(0));
    rando2 = ((rand() % 10) + 1);
    rando1= ((rand() % 10) + 1);
    mathVar = ((rand() % 4) + 1);
    cout << "**************************************************************************************" << endl;
    cout << "                     __  __       _   _       _____      _             " << endl;
    cout << "                    |  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __ " << endl;
    cout << "                    | |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|" << endl;
    cout << "                    | |  | | (_| | |_| | | |   | || |_| | || (_) | |" << endl;
    cout << "                    |_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|" << endl;
    cout << "**************************************************************************************" << endl;
    cout << "*                       Welcome to this Simple Silly Math Tutor!!                    *" << endl;
    cout << "**************************************************************************************" << endl;

    cout << "Fun Math Facts" << endl;
    cout << "   -Math wasn't created at any one time but developed over thousands of years." << endl;
    cout << "   -""Forty"" is the only number that is spelt with letters arranged in alphabetical order." << endl;
    cout << "   -Every odd number has an ""e"" in it." << endl;

    string name;

    cout << "Hey this is your Simple Silly Math Tutor, What's your name?" << endl;
    getline(cin, name );
    cout << "Hello " << name << ", welcome to your math tutor." << endl;
    cout << "Let's begin!" << endl << endl;


    switch (mathVar) {
        case 1: {
            ans = rando1 + rando2;
            char letter = '+';
            mathSymbol = letter;
            break;
        }

        case 2: {
            if (rando1 < rando2) {
                ans = rando2 - rando1;
            }
            else if (rando2 < rando1) {
                ans = rando1 - rando2;
            }
            char sub = '-';
            mathSymbol = sub;
            break;
        }

        case 3: {
            ans = rando1 * rando2;
            char time = '*';
            mathSymbol = time;
            break;
        }

        case 4: {
            rando1 = (rando2 * rando1);
            ans = rando1 / rando2;
            char div = '/';
            mathSymbol = div;
            break;
        }

        default: {
            cout << "Invalid question type: " << mathVar << endl;
            cout << "Program ended with an error -1" << endl;
            cout << "Please report this error to Cash Vollertsen and/or Ethan Hoge" << endl;
            return -1;
        }
    }


    cout << name << " what is "<< rando1 << mathSymbol << rando2 << "?" << endl;

    cin >> useranswer;

    if (useranswer == ans) {
        cout << "Congrats! You're amazing at math equations " << name <<"!" << endl;
        cout << endl;
        cout << "Thank you for playing our game!" << endl;
    } else {
        cout << "Seems like you got this answer wrong " << name << "." << endl;
        cout << "The correct answer was " << ans << "." << endl;
        cout << endl;
        cout << "Keep calm and try the game again to improve your math skills!" << endl;
    }

    return 0;
}
