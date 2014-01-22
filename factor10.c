/*
 * Program Name : factor10.c
 * Discription  : Factors one negative (b) and one positive (c) number
 * Author       : Joshua Pena
 * Date         : 15|01|14
 */

#include <stdio.h>

// Function Prototypes
void function10(int, int);

// Function Definitions
void function10(additionGoal, multiplyGoal) {
  int check = 0;
  int impossible = 0;
  int num1 = 0;
  int num2 = 0;
  int multiplyCheck = 0;
  int additionCheck = 0;
  int possibleCheck;

  while (multiplyCheck != 1) {
    while (additionCheck != 1) {
      check = num1 + num2;
      if (check > additionGoal) {
        num1--;
      } else if (num2 < -multiplyGoal) {
        impossible = 1;
        additionCheck = 1;
      } else if (check < additionGoal) {
        num1 = 0;
        num2--;
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
      num2--;
    }
    if (impossible == 1) {
      multiplyCheck = 1;
    }
  }

  if (impossible == 0) {
    printf("\n(x - %d) (x - %d)\n", -num1, -num2);
  } else {
    printf("\nNot Possible\n");
  }

  return;
}
