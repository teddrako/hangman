#include "all.h"

void introtext(){

  // intialize the input
  char enterput;

  // clear all the un aesthetic text 
  system("clear");

  // rules
  printf("\x1B[32m\e[1mHOW TO PLAY HANGMAN\033[0m");

  cout<<endl<<endl<<"Hangman is an entertaining and educational game for at least two people that requires nothing more than the ability to spell."<<endl<<endl<<"The computer, the host, makes up a secret word based on a specific topic, while the other player tries to guess the word by asking what letters it contains."<<endl<<endl<<"However, every wrong guess brings them one step closer to losing."<<endl<<endl<<"Every incorrect letter adds them a body structure. If all body structures appear then it is";

  printf("\x1B[31m\e[3\e[1m GAME OVER!\n\n\033[0m");

  printf("\x1B[31mPress \e[1mEnter\e[0m\x1B[31m to start \033[0m");

  // press enter to continue
  cin.get(enterput);

  // clear 
  system("clear");

  // loading animation
  for (int i = 0; i <5; i++) {
    cout<<"Loading ... ◐\n";
    usleep(200000);
    system("clear");
    cout<<"Loading ... ◓\n";
    usleep(200000);
    system("clear");
    cout<<"Loading ... ◑\n";
    usleep(200000);
    system("clear");
    cout<<"Loading ... ◒\n";
    usleep(200000);
    system("clear");
  }

  // cool text "Begin!"
  printf("\x1B[32m\e[1m");
  cout<<"██████╗ ███████╗ ██████╗ ██╗███╗   ██╗██╗\n██╔══██╗██╔════╝██╔════╝ ██║████╗  ██║██║\n██████╔╝█████╗  ██║  ███╗██║██╔██╗ ██║██║\n██╔══██╗██╔══╝  ██║   ██║██║██║╚██╗██║╚═╝\n██████╔╝███████╗╚██████╔╝██║██║ ╚████║██╗\n╚═════╝ ╚══════╝ ╚═════╝ ╚═╝╚═╝  ╚═══╝╚═╝";
  printf("\n\033[0m");

  // wait time
  usleep(3000000);

  // clear screen before starting game code
  system("clear");
}