#include <iostream>

int main() {
    char oper; // For taking the operator input in a character variable.
    int n, i; // For the size of Operand array and i for iteration of the loop.
    double extra = 0; // For saving the updated values after performing selected operations or at the initial stage for storing the 1st value.

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> oper;

    std::cout << "Enter Number of Operands: ";
    std::cin >> n;
    double operands[n]; // Operand Array for taking the input of N Operands, and the size of the array is already provided by the user as N is the size of the Array.

    std::cout << "Enter " << n << " operands below:" << std::endl;
    for (i = 0; i < n; i++) {
        std::cin >> operands[i];
    }

    switch (oper) {
    case '+':
        for (i = 0; i < n; i++) {
            if (i < n - 1) {
                std::cout << operands[i] << " + ";
                extra = extra + operands[i];
            } else {
                std::cout << operands[i];
                extra = extra + operands[i];
                std::cout << " = " << extra;
            }
        }
        break;
    case '-':
        for (i = 0; i < n; i++) {
            if (i == 0) {
                std::cout << operands[i] << " - ";
                extra = extra + operands[i];
            } else if (i < n - 1) {
                std::cout << operands[i] << " - ";
                extra = extra - operands[i];
            } else {
                std::cout << operands[i];
                extra = extra - operands[i];
                std::cout << " = " << extra;
            }
        }
        break;
    case '*':
        for (i = 0; i < n; i++) {
            if (i == 0) {
                std::cout << operands[i] << " x ";
                extra = extra + operands[i];
            } else if (i < n - 1) {
                std::cout << operands[i] << " x ";
                extra = extra * operands[i];
            } else {
                std::cout << operands[i];
                extra = extra * operands[i];
                std::cout << " = " << extra;
            }
        }
        break;
    case '/':
        extra = operands[0];
        for (i = 0; i < n - 1; i++) {
            extra = extra / operands[i + 1];
            std::cout << extra << " ";
        }
        break;
    default:
        std::cout << "Error! Operator is not correct";
    }

    return 0;
}
