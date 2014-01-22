/*
 * Program Name : factor11.c
 * Discription  : Factors two positive numbers
 * Author       : Joshua Pena
 * Date         : 15|01|14
 */

#include <stdio.h>

// Function Prototypes
void function11(int, int);

// Function Definitions
void function11(additionGoal, multiplyGoal) {
  int check = 0;
  int impossible = 0;
  int num1 = 0;
  int num2 = 0;
  int multiplyCheck = 0;
  int additionCheck = 0;
  int possibleCheck;

  if (multiplyGoal < additionGoal) {
    possibleCheck = additionGoal;
  } else {
    possibleCheck = multiplyGoal;
  }

  while (multiplyCheck != 1) {
    while (additionCheck != 1) {
      check = num1 + num2;
      if (check < additionGoal) {
        num1 += 1;
      } else if (num2 > possibleCheck) {
        impossible = 1;
        additionCheck = 1;
      } else if (check > additionGoal) {
        num1 = 0;
        num2 += 1;
      } else if (check == additionGoal) {
        additionCheck = 1;
      }
    }
    check = num1 * num2;
    if (check == multiplyGoal) {
      multiplyCheck = 1;
    } else {
      additionCheck = 0;
      num1 = 0;
      num2++;
    }
    if (impossible == 1) {
      multiplyCheck = 1;
    }
  }

  if (impossible == 0) {
    printf("\n(x + %d) (x + %d)\n", num1, num2);
  } else {
    printf("\nNot Possible\n");
  }

  return;
}
