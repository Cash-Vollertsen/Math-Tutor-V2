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
using namespace std;


int main() {
    double useranswer;
    double ans;
    int rando2 = 0;
    int rando1= 0;
    int mathvar = 0;
    string mathSymbol;

    srand(time(0));
    rando2 = ((rand() % 10) + 1);
    rando1= ((rand() % 10) + 1);
    mathvar = ((rand() % 4) + 1);


    cout << "************************************************************************************" << endl;
    cout << "*                         Welcome to Silly Simple Math Tutor V1                    *" << endl;
    cout << "************************************************************************************" << endl;

    cout << "Fun Math Facts" << endl;
    cout << "   -Math wasn't created at any one time but developed over thousands of years." << endl;
    cout << "   -""Forty"" is the only number that is spelt with letters arranged in alphabetical order." << endl;
    cout << "   -Every odd number has an ""e"" in it." << endl;

    string name;

    cout << "Hey this is your Simple Silly Math Tutor, What's your name?" << endl;
    getline(cin, name );
    cout << "Hello " << name << ", welcome to your math tutor." << endl;
    cout << "Let's begin!" << endl << endl;

    srand(time(0));




    switch (mathvar) {
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
