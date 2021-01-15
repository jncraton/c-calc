#include <stdio.h>
#include <stdlib.h>

int get_result(int operand1, char operator, int operand2) {
  /**
  Reurns the result of an operation

  operand1 and operand2 are integers
  operator is a char that can be one of (+,-,*,/)
  */
}

int main(int argc, char ** argv) {
  int operand1, operand2;
  char operator;

  // Parse argument 1 into operands and operator
  sscanf(argv[1], "%d %c %d", // your code here

  int result = // call get_result here

  // Display the result
  printf("%d %c %d = %d\n", operand1, operator, operand2, result);
}