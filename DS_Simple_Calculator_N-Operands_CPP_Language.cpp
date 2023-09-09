#include <iostream>
#include <vector>

using namespace std;

struct Calculator {
  char operator;
  vector<double> operands;
};

double add(double x, double y) {
  return x + y;
}

double subtract(double x, double y) {
  return x - y;
}

double multiply(double x, double y) {
  return x * y;
}

double divide(double x, double y) {
  return x / y;
}

int main() {
  Calculator calculator;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> calculator.operator;

  cout << "Enter number of operands: ";
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    double operand;
    cout << "Enter operand " << i + 1 << ": ";
    cin >> operand;
    calculator.operands.push_back(operand);
  }

  double result = calculator.operands[0];
  for (int i = 1; i < n; i++) {
    switch (calculator.operator) {
    case '+':
      result = add(result, calculator.operands[i]);
      break;
    case '-':
      result = subtract(result, calculator.operands[i]);
      break;
    case '*':
      result = multiply(result, calculator.operands[i]);
      break;
    case '/':
      result = divide(result, calculator.operands[i]);
      break;
    }
  }

  cout << "Result = " << result << endl;

  return 0;
}
