#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int num1, num2;
double fnum1, fnum2, snum;
char repeat, choice0, choice1, choice2;

void normalcalcu();
void scientificcalcu();

int main() {
    system("cls");
    cout << "\t\t\"CALCULATOR MENU\"\n" << endl;
    cout << "(1) Normal Calculator\n(2) Scientific Calculator\nChoose a number (1-2): ";
    choice0 = getche();

    switch(choice0) {
        case '1':
            normalcalcu();
            break;
        case '2':
            scientificcalcu();
            break;
        default:
            cout << "\nYou Entered Invalid Number!!!" << endl;
            getch();
            main();
            break;
    }
    return 0;
}

void normalcalcu() {
    Repeat:
    system("cls");
    cout << "\t\t\"NORMAL CALCULATOR\"\n" << endl;
    cout << "Choose a symbol to perform operation\n[+ (add) | - (sub) | * (mul) | / (div) | % (mod) | ~ (ave)]: ";
    choice1 = getche();

    cout << "\n\n";

    cout << "Enter First Number: ";
    cin >> num1;

    cout << "Enter Second Number: ";
    cin >> num2;

    cout << endl;
    switch(choice1) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1-num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1*num2 << endl;
            break;
        case '/':
            fnum1 = num1;
            fnum2 = num2;
            cout << num1 << " / " << num2 << " = " << fnum1/fnum2 << endl;
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << num1%num2 << endl;
            break;
        case '~':
            cout << "The Average of " << num1 << " and " << num2 << " is " << (num1+num2)/2 << endl;
            break;
        default:
            cout << "You Entered Invalid Number!!!" << endl;
            break;
    }
    Wish:
        cout << "\nPress 'r' to repeat program (else back to main menu)" << endl;
        repeat = getche();
    
    if(repeat == 'r' || repeat == 'R') {
        goto Repeat;
    }else {
        main();
    }
}

void scientificcalcu() {
    Repeat:
    system("cls");
    cout << "\t\t\"SCIENTIFIC CALCULATOR\"\n" << endl;
    cout << "Choose a number to perform operation\n[ 1 (Square root) | 2 (Exponential) | 3 (Logarithm) | 4 (Sine) | 5 (Cosine) | 6 (Tangent)]: ";
    choice2 = getche();

    cout << "\n\n";

    cout << "Enter a number: ";
    cin >> snum;

    cout << endl;
    switch(choice2) {
        case '1':
            cout << "The square root of " << snum << " is " << sqrt(snum) << endl;
            break;
        case '2':
            cout << "The exponential of " << snum << " is " << exp(snum) << endl;
            break;
        case '3':
            cout << "The logarithm of " << snum << " is " << log10(snum) << endl;
            break;
        case '4':
            cout << "The sine of " << snum << " is " << sin(snum) << endl;
            break;
        case '5':
            cout << "The consine of " << snum << " is " << cos(snum) << endl;
            break;
        case '6':
            cout << "The tangent of " << snum << " is " << tan(snum) << endl;
            break;
        default:
            cout << "You Entered Invalid Number!!!" << endl;
            break;
    }
    Wish:
        cout << "\nPress 'r' to repeat program (else back to main menu)" << endl;
        repeat = getche();
    
    if(repeat == 'r' || repeat == 'R') {
        goto Repeat;
    }else {
        main();
    }
}