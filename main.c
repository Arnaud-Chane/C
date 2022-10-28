#include <stdio.h>
#include <string.h>

void guessWord(){
  char * name = "Arnaud";
  char playerGuess[20];
  scanf("%s", &playerGuess);

  if(strncmp(playerGuess, name, 6) == 0){
    printf("You won.\n");
  } else {
    printf("You loose.\n");
  }
}

int main() {
  guessWord();
  return 0;
}

// #include <stdio.h>

// void guessWord(){
//   int winOrLose = 0;

//   char name[] = "Arnaud";
//   printf("%s\n", name);

//   char playerGuess[5];
//   scanf("%s", playerGuess);

//   int i = 0;

//   while(i < 6){
//     char *pLetterWordToGuess = &name[i];
//     char letterWordToGuess = *pLetterWordToGuess;

//     char *pLetterPlayerGuess = &playerGuess[i];
//     char letterPlayerGuess = *pLetterPlayerGuess;

//     printf("%c", letterWordToGuess);
//     printf("%c", letterPlayerGuess);

//     i++;

//     if(letterWordToGuess != letterPlayerGuess) {
//       printf("1");
//       winOrLose = 1;
//       goto lose;
//     } else {
//       printf("0");
//     };
//     i++;
//   }

//   if(winOrLose == 1){
//     lose:
//       printf("Not the same.");
//   } else if(winOrLose == 0) {
//     win:
//       printf("Words are the same !");
//   }
// }

// int main() {
//   guessWord();
//   return 0;
// }