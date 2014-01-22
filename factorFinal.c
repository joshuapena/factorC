/*
 * Program Name : factorFinal.c
 * Discription  : Factors two integers
 * Author       : Joshua Pena
 * Date         : 15|01|14
 */

#include <stdio.h>
#include "factor11.c"
#include "factor00.c"
#include "factor10.c"
#include "factor01.c"

// Function Prototypes

int main() {
  int additionGoal, multiplyGoal;

  printf("Enter the 'b' value : ");
  scanf("%d", &additionGoal);
  printf("Enter the 'c' value : ");
  scanf("%d", &multiplyGoal);

  if (additionGoal > 0) {
    if (multiplyGoal > 0) {
      function11(additionGoal, multiplyGoal);
    } else {
      function01(additionGoal, multiplyGoal);
    }
  } else {
    if (multiplyGoal > 0) {
      function10(additionGoal, multiplyGoal);
    } else {
      function00(additionGoal, multiplyGoal);
    }
  }

  return 0;
}

// Function Definitions
