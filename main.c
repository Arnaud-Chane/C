#include <stdio.h>

int main() {

  char name1 = 'A';
  char *pName1 = &name1;

  char name2 = 'A';
  char *pName2 = &name2;

  char test1 = *pName1;
  char test2 = *pName2;

  if(test1 == test2){
    printf("Good");
  } else {
    printf("Nope");
  };
  
  return 0;
}