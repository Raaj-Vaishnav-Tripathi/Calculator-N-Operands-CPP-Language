# Calculator-N-Operands (C++)

## Overview
This project implements a simple yet customizable calculator using C++. It supports four basic arithmetic operations—addition, subtraction, multiplication, and division—while allowing users to input the number of operands for the selected operation.

## Features
- **Dynamic operand count**: The calculator can process multiple operands provided by the user, performing the chosen operation across all inputs.
- **Basic arithmetic operations**: Includes addition (+), subtraction (-), multiplication (*), and division (/).
- **Efficient code structure**: Uses switch cases and loops to handle different operations and iterate through operands.

## How It Works
1. The user specifies the number of operands (`n`).
2. The operands are then stored in a dynamically created array.
3. Depending on the operation (+, -, *, /) chosen by the user, the program performs the corresponding arithmetic on all operands.

## Time and Space Complexity
- **Time Complexity**:  
  - Input Reading: O(n)  
  - Initialization: O(n)  
  - Operation Execution: O(n-1)  
  - Overall: O(n)

- **Space Complexity**:  
  - Operand storage: O(n)  
  - Additional variables: O(1)  
  - Overall: O(n)

## Example Usage
```cpp
Enter an operator (+, -, *, /): +
Enter Number of Operands: 3
Enter 3 operands below:
5 3 2
5 + 3 + 2 = 10
