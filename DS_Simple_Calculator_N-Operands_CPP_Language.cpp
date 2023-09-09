#include <iostream>
#include <vector>

using namespace std;

struct Node {
  double operand;
  Node* next;
};

class LinkedList {
  Node* head;

public:
  LinkedList() {
    head = nullptr;
  }

  void push(double operand) {
    Node* node = new Node();
    node->operand = operand;
    node->next = head;
    head = node;
  }

  double pop() {
    double operand = head->operand;
    Node* temp = head;
    head = head->next;
    delete temp;
    return operand;
  }
};

class Stack {
  Node* top;

public:
  Stack() {
    top = nullptr;
  }

  void push(char operator) {
    Node* node = new Node();
    node->operator = operator;
    node->next = top;
    top = node;
  }

  char pop() {
    char operator = top->operator;
    Node* temp = top;
    top = top->next;
    delete temp;
    return operator;
  }
};

class Queue {
  Node* front;
  Node* rear;

public:
  Queue() {
    front = nullptr;
    rear = nullptr;
  }

  void push(double result) {
    Node* node = new Node();
    node->result = result;
    node->next = nullptr;
    if (front == nullptr) {
      front = node;
      rear = node;
    } else {
      rear->next = node;
      rear = node;
    }
  }

  double pop() {
    double result = front->result;
    Node* temp = front;
    front = front->next;
    if (front == nullptr) {
      rear = nullptr;
    }
    delete temp;
    return result;
  }
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
  LinkedList operands;
  Stack operators;
  Queue results;

  cout << "Enter an operator (+, -, *, /): ";
  char operator;
  cin >> operator;

  while (operator != '=') {
    operators.push(operator);

    cout << "Enter operand: ";
    double operand;
    cin >> operand;
    operands.push(operand);

    cout << "Enter an operator (+, -, *, /): ";
    cin >> operator;
  }

  while (!operators.empty()) {
    char operator = operators.pop();
    double operand2 = results.pop();
    double operand1 = results.pop();
    double result = performOperation(operator, operand1, operand2);
    results.push(result);
  }

  cout << "Result = " << results.pop() << endl;

  return 0;
}
