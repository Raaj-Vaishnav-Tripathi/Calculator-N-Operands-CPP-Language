#include <iostream>
using namespace std;

int main() {
  char operator; // For taking the Operator input in character variable.
  int n, i; // For the size of Operand array and i for iteration of loop.
  double extra = 0; // For saving the updated values after performing selected operations or at intial stage for storing 1st value.

  cout << "Enter an operator (+, -, *, /): ";
  cin >> operator;

  cout << "Enter Number of Operands: ";
  cin >> n;
  double operands[n]; // Operand Array for taking the input of N Operands and size of array is already provided by user as N is size of Array.
  cout << "Enter " << n << " operands below:-\n";
  for (i = 0; i < n; i++) {
    cin >> operands[i];
  }

  switch (operator) // Here, I Used Switch Cases for all 4 operations and added defination of all 4 Arithematic Operations.
  {
  case '+':
    for (i = 0; i < n; i++) {
      if (i < n - 1) {
        cout << operands[i] << " + ";
        extra += operands[i];
      } else {
        cout << operands[i];
        extra += operands[i];
        cout << " = " << extra;
      }
    }
    break;
  case '-':
    for (i = 0; i < n; i++) {
      if (i == 0) {
        cout << operands[i] << " - ";
        extra += operands[i];
      } else if (i < n - 1) {
        cout << operands[i] << " - ";
        extra -= operands[i];
      } else {
        cout << operands[i];
        extra -= operands[i];
        cout << " = " << extra;
      }
    }
    break;
  case '*':
    for (i = 0; i < n; i++) {
      if (i == 0) {
        cout << operands[i] << " x ";
        extra += operands[i];
      } else if (i < n - 1) {
        cout << operands[i] << " x ";
        extra *= operands[i];
      } else {
        cout << operands[i];
        extra *= operands[i];
        cout << " = " << extra;
      }
    }
    break;
  case '/':
    extra = operands[0];
    for (i = 0; i < n - 1; i++) {
      extra = extra / operands[i + 1];
      cout << extra << " ";
    }
    break;
  default:
    cout << "Error! operator is not correct";
  }
  return 0;
}
