#include <stdio.h>
#include <stdlib.h>

void test();

signed char subtract(signed char a, signed char b) {
  /*
   * Returns the result of `a - b` This function may only use the following
   * operators - Addition `+` - Bitwise complement `~` 
   */

  return a;
}

int get_result(int operand1, char operator, int operand2) {
  /**
  Returns the result of an operation

  operand1 and operand2 are integers
  operator is a char that can be one of (+,-,*,/)

  Exits the program with status code 1 in the case of an invalid operation.
  */

  fprintf(stderr, "Invalid operand\n");
  exit(1);
}

int main(int argc, char **argv) {
  int operand1, operand2;
  char operator;

  if (argc != 2) {
    fprintf(stderr, "No expression defined\n");
    exit(1);
  }

  test();

  // Parse argument 1 into operands and operator
  sscanf(argv[1], "%d %c %d", &operand1, &operator, &operand2);

  int result = get_result(operand1, operator, operand2);

  printf("%d %c %d = %d\n", operand1, operator, operand2, result);
}

/* 
Test code 

It is not recommended to modify any code below this point
*/

#define test_int_equal(exp, result) \
if ((exp) != result) { \
  fprintf(stderr,"Test %s == %d FAILED as %d.\n", #exp, result, exp); \
  exit(1); \
} \


void test() {
  test_int_equal(subtract(0, 0), 0);
  test_int_equal(subtract(1, 0), 1);
  test_int_equal(subtract(99, 0), 99);
  test_int_equal(subtract(2, 1), 1);
  test_int_equal(subtract(10, 1), 9);
  test_int_equal(subtract(35, 6), 29);
  test_int_equal(subtract(127, 10), 117);
  test_int_equal(subtract(90, 85), 5);
  test_int_equal(subtract(1, 2), -1);
  test_int_equal(subtract(15, 20), -5);
  test_int_equal(subtract(0, 1), -1);
  test_int_equal(subtract(1, -1), 2);
  test_int_equal(subtract(-1, 0), -1);
  test_int_equal(subtract(-20, -10), -10);

  test_int_equal(get_result(1, '+', 1), 2);
  test_int_equal(get_result(10, '-', 5), 5);
  test_int_equal(get_result(-5, '-', -10), 5);
  test_int_equal(get_result(2, '*', -10), -20);
  test_int_equal(get_result(50, '/', 5), 10);
}
