#include "all.h"

void close(bool ending) {

  // wait and clear screen
  usleep(1500000);
  system("clear");

  // if win
  if (ending == true) {

    printf("\x1B[32m\e[1m");
    cout<<"Congratulations!\nYou have spelt "<<wword<<"!\n";
    printf("\033[0m");

    // if lose
  } else if (ending == false) {

    printf("\x1B[31m\e[1m");
    cout<<"Better luck next time!\n";
    printf("\033[0m");

  }

  // ending text and waits
  usleep(1500000);

  printf("\x1B[96m\e[1m");
  cout<<"Thank you for playing Hangman™ by Ted Drako.\n";
  printf("\033[0m");

  usleep(5000000);

  printf("\x1B[31m\e[1m");
  cout<<"This program will now exit.";
  printf("\033[0m");

  system("clear");

}