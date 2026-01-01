#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  srand(time(NULL));
  int mysteryNumber = rand() % 100;
  int guess = -1; // Uninitialized variable might cause some undefined behaviour
  printf("Welcome to the Number guessing game!\nThe Computer will generate a "
         "number between 0 and 100.\nTry your best to guess it.\n\n");
  while (guess != mysteryNumber) {
    printf("Enter your guess: ");
    scanf("%i", &guess);
    if (guess < mysteryNumber)
      printf("The guess is lesser than the number.\n");
    else if (guess > mysteryNumber)
      printf("The guess is greater than the number.\n");
  }
  printf("You Won!\n");
}
