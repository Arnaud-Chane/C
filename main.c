#include <stdio.h>

void guessNumber(int guess){

  int numMaxGuess = 5;
  int numGuess = 0;
  int playerGuess;

  printf("Guess the number between 0 and 10.\n");
  printf("Now guess it : ");

  while(numGuess < numMaxGuess) {
    scanf("%d", &playerGuess);
    if(playerGuess < guess){
      printf("Too low.\n");      
    } else if(playerGuess > guess) {
      printf("Too high.\n");
    } else if(playerGuess == guess) {
      printf("Wow, you guess right !\n");
      goto win;
    } else {
      printf("I didn\'t catch it, retry");
      numGuess--;
    };
    numGuess++;
  } 
  win:
    printf("The game ends here.");
}

int main(){
  guessNumber(9);
  return 0;
}