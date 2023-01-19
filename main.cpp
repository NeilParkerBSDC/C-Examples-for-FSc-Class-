#include <iostream>
using namespace std;

// functions for each operations

double num1;
double num2;
string chosenOperator;
double answer;

void getInput() {
    cout << "Enter the first number ";
    cin >>  num1;

    cout << "Enter the  operator your want (+,-,* or /): ";
    cin >>  chosenOperator;

    cout << "Enter the second number: ";
    cin >>  num2;

    }

void doCalc() {
    getInput();
    if (chosenOperator=="+") {answer = num1 + num2;}
    else if (chosenOperator=="-") {
        answer = num1 - num2;
        }
    else if (chosenOperator=="*") {
        answer = num1 * num2;
        }
    else if (chosenOperator=="/") {
        answer = num1 / num2;
        }
    else {
        cout << "You have not chosen a valid operator, or entered numbers";
    }
    cout << num1 << " " << chosenOperator << " " << num2 << " = " << answer << "\n";
    }

int main() {
// main loop

string continueThis = "Y";

while (continueThis == "Y") {
    string menuChoice;
    cout << "What do you want to do, carry out a new calculation (N) or quit (Q) ";
    cin >> menuChoice;
    if (menuChoice=="N") {
        doCalc();
        }
    else if (menuChoice=="Q") {
        cout << "OK, Goodbye";
        continueThis ="N";
        }
    else {
        cout << "Invalid menu choice uu need \"N\" for a new calculation or \"Q\"for quit";
        }
    }
}