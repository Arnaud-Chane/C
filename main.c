#include <stdio.h>

int main() {
  
  float average;
  int i;
  int j;
  int grades[2][5];  

  grades[0][0] = 80;
  grades[0][1] = 70;
  grades[0][2] = 65;
  grades[0][3] = 89;
  grades[0][4] = 90;

  grades[1][0] = 85;
  grades[1][1] = 80;
  grades[1][2] = 80;
  grades[1][3] = 82;
  grades[1][4] = 87;

  for(i=0; i<2; i++){
    average = 0;
    for(j=0; j<5; j++){
      average += grades[i][j];
    };

    average = sizeof(grades)/sizeof(grades[0][0]);  
    printf("Average is : %.4g\n", average);  
  };

  return 0;
}