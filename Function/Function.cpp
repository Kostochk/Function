#include <iostream>
using namespace std;

template <typename T>
T PrintSum(T firstNumber, T secondNumber) {
    return firstNumber + secondNumber;
}

template <typename T>
T PrintSub(T firstNumber, T secondNumber) {
    return firstNumber - secondNumber;
}

template <typename T>
T PrintMul(T firstNumber, T secondNumber) {
    return firstNumber * secondNumber;
}

template <typename T>
T PrintDiv(T firstNumber, T secondNumber) {
    if (secondNumber == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return firstNumber / secondNumber;
}

void performOperation(char operat, int firstNumber, int secondNumber) {
    if (operat == '+') {
        cout << "Result: " << PrintSum(firstNumber, secondNumber) << endl;
    }
    else if (operat == '-') {
        cout << "Result: " << PrintSub(firstNumber, secondNumber) << endl;
    }
    else if (operat == '*') {
        cout << "Result: " << PrintMul(firstNumber, secondNumber) << endl;
    }
    else if (operat == '/') {
        cout << "Result: " << PrintDiv(firstNumber, secondNumber) << endl;
    }
    else {
        cout << "Unknown operation!" << endl;
    }
}

int main() {
    int firstNumber;
    cout << "Enter your first number: ";
    cin >> firstNumber;

    int secondNumber;
    cout << "Enter your second number: ";
    cin >> secondNumber;

    char operat;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operat;

    performOperation(operat, firstNumber, secondNumber);

    return 0;
}

