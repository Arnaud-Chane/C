
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
  double num1;
  double num2;
  char operator;
  double answer;

  printf("Number 1:");
  scanf("%lf\n", &num1);
  printf("Operator:");
  scanf("%c\n", &operator);
  printf("Number 2:");
  scanf("%lf\n", &num2);

  switch(operator)
  {
    case '+': answer = num1+num2;
      break;
    case '-': answer = num1-num2;
      break;
    case '*': answer = num1*num2;
      break;
    case '/': answer = num1/num2;
      break;
    default: goto fail;
  }

  printf("%d", &answer);
  goto exit;

  fail:
    printf("Retry.");
  exit:
    return 0;
}