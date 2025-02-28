#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber = 0;

    cout << "Enter first number: ";
    cin >> firstNumber;
    cout << "Enter second number: ";
    cin >> secondNumber;

    cout << "\nArithmetic Operators\n";
    cout << " Summation: " << (firstNumber + secondNumber) << endl;
    cout << " Subtraction: " << (firstNumber - secondNumber) << endl;
    cout << " Multiplication: " << (firstNumber * secondNumber) << endl;

    // Handle division by zero
    if (secondNumber != 0) {
        cout << " Division: " << (firstNumber / secondNumber) << endl;
        cout << " Remainder: " << (firstNumber % secondNumber) << endl;
    }
    else {
        cout << " Division: Undefined (Cannot divide by zero)\n";
        cout << " Remainder: Undefined (Cannot divide by zero)\n";
    }

    cout << " Half: " << (firstNumber / 2) << endl;

    cout << "\nRelational Operators\n";
    cout << " Is Greater: " << (firstNumber > secondNumber) << endl;
    cout << " Is Greater or Equal: " << (firstNumber >= secondNumber) << endl;
    cout << " Is Less: " << (firstNumber < secondNumber) << endl;
    cout << " Is Less or Equal: " << (firstNumber <= secondNumber) << endl;
    cout << " Is Equal: " << (firstNumber == secondNumber) << endl;
    cout << " Is Not Equal: " << (firstNumber != secondNumber) << endl;

    cout << "\nLogical Operators\n";
    cout << " AND: " << (firstNumber > 0 && secondNumber > 0) << endl;
    cout << " OR: " << (firstNumber >= secondNumber || firstNumber != secondNumber) << endl;
    cout << " NOT: " << !(firstNumber < secondNumber) << endl;

    cout << "\nBitwise Operators\n";
    cout << " AND (&): " << (firstNumber & secondNumber) << endl;
    cout << " OR (|): " << (firstNumber | secondNumber) << endl;
    cout << " XOR (^): " << (firstNumber ^ secondNumber) << endl;
    cout << " Left Shift (<< 1): " << (firstNumber << 1) << endl;
    cout << " Right Shift (>> 1): " << (firstNumber >> 1) << endl;

    cout << "\nAssignment Operators\n";
    int a = firstNumber, b = secondNumber;
    a += b; cout << " Addition Assignment (+=): " << a << endl;
    a = firstNumber, b = secondNumber;
    a -= b; cout << " Subtraction Assignment (-=): " << a << endl;
    a = firstNumber, b = secondNumber;
    a *= b; cout << " Multiplication Assignment (*=): " << a << endl;

    if (b != 0) {
        a = firstNumber;
        a /= b; cout << " Division Assignment (/=): " << a << endl;
    }
    else {
        cout << " Division Assignment (/=): Undefined (Cannot divide by zero)\n";
    }

    cout << "\nIncrement and Decrement Operators\n";
    cout << " Pre-Increment: " << (++firstNumber) << endl;
    cout << " Post-Increment: " << (firstNumber++) << endl;
    cout << " Pre-Decrement: " << (--firstNumber) << endl;
    cout << " Post-Decrement: " << (firstNumber--) << endl;

    cout << "\nTernary Operator\n";
    cout << " Largest number is: " << ((firstNumber > secondNumber) ? firstNumber : secondNumber) << endl;

    return 0;
}
