#include <stdio.h>

void guessWord() {
  char wordToGuess[] = "arnaud";
  char playerInput[20];

  int guessMax = 5;
  int guessNb = 0;
  while(guessNb < guessMax){    

    scanf("%s", playerInput);
    int i = 0;
    while(i < 6){
      // -- Start: attribute value using pointer --
      char *pWordToGuess = &wordToGuess[i];
      char vWordToGuess = *pWordToGuess;

      char *pplayerInput = &playerInput[i];
      char vplayerInput = *pplayerInput;
      // -- End --

      if(vWordToGuess == vplayerInput){
        printf("%c", vWordToGuess);
      } else {
        printf("_");
      };
      i++;
    };
    printf("\n");
  guessNb++;
  };
};


int main(){

  guessWord();

  return 0;
}
