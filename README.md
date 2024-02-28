# Simple Calculator-N-Operands CPP Language
This is completely C++ language based Project which can perform 4 major operations of basic Calculator which are:- Addition , Subtraction, Division &amp; Multiplication.
The main difference is that it can take the number of operands input by the user &amp; it can then perform the selected operation on all operands provided till the nth
operand. I just took the number of Operands input by user in integer variable "n" and then created a array named Operands of size "n". Then I used Switch cases for all
four Arithmetic operations :- +, -, *, /. I also used for loops inside all switch cases for iterating every operand in Operand array and used some conditional statements.

Time Complexity:

Input Reading: O(n)
Initializing the vector: O(n)
Performing the selected operation: O(n-1) (since loop through n-1 operands)
Printing the result: O(1)
The overall time complexity of the code is O(n).

Space Complexity:

Vector for operands: O(n)
Additional variables: O(1)
The overall space complexity of the code is O(n).


I have one Respository with same project implemented completely in C Language.
