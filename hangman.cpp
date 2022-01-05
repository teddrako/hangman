#include "all.h"

int hangman(string word[]) {

  // variables 
  // wlen ~ length of guess word
  // mistakes ~ number of mistakes done
  // xword ~ the word displayed as with "#" to mimic the letters guessed
  // end ~ if repeat on loss
  // sword ~ word to be guessed
  // guess ~ current letter being guessed
  int wlen, mistakes = 0;
  string xword = "", end = "", sword = "", guess = "";

  // randomize word choice and get all variables
  srand(time(NULL));
  sword = word[rand()%5];
  wlen = sword.length();
  wword = sword;
  
  // loop for length of sword and make xword full of place holders
  for (int i = 0; i < wlen; i++) {
    xword = xword + "#";
  }

  // loop guesses until the xword is guessd completely
  while (xword != sword) {

    // input text
    cout<<"Enter a letter in the word "<<xword<<" : ";

    // guess input
    getline(cin, guess);

    // clear screen 
    system("clear");

    // if the guess is blank or not a letter it is invalid
    if (isalpha(guess[0]) == false || guess == "\n") {

      printf("\x1B[31m\e[1m");
      cout<<"Invalid!\e[0m\x1B[31m\nPlease enter a valid letter.\n\n";
      printf("\033[0m");
      
      // if the guess is longer than one letter it is invalid
    } else if (guess.length() > 1) {

      printf("\x1B[31m\e[1m");
      cout<<"Oops!\e[0m\x1B[31m\nPlease only enter one letter at a time!\n\n";
      printf("\033[0m");

      // if the letter is already in the word (aka already guessed) displays following message
    } else if (sword.find(guess) != string::npos && xword.find(guess) != string::npos) {

      printf("\x1B[32m\e[1m");
      cout<<"Oops!\e[0m\x1B[32m\nThe letter \e[1m"<<guess<<"\e[0m\x1B[32m is already in the word.\n\n";
      printf("\033[0m");

      // if guess is correct
    } else if (sword.find(guess[0]) != string::npos) {

      // replace the current guess in the hashed out word and display the new word with all known letters
      for (int i = 0; i < wlen; i++) {
        if (sword[i] == guess[0]) {
          xword[i] = guess[0];
        }
      }

      printf("\x1B[32m\e[1m");
      cout<<"Correct!\e[0m\x1B[32m\nThe letter \e[1m"<<guess<<"\e[0m\x1B[32m is in the word.\n\n";
      printf("\033[0m");

      // incorrect guess
    } else {

      printf("\x1B[31m\e[1m");
      cout<<"Incorrect!\e[0m\x1B[31m\nThe letter \e[1m"<<guess<<"\e[0m\x1B[31m is not in the word.\n";
      printf("\033[0m");

      // increase mistakes
      mistakes += 1;

      // display hanging man drawing progression based on mistakes
      switch (mistakes) {
        case 1:
          cout<<endl<<" |"<<endl<<endl;
          continue;
        case 2:
          cout<<endl<<" |"<<endl<<" |"<<endl<<endl;
          continue;
        case 3:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<endl;
          continue;
        case 4:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<endl<<endl;
          continue;
        case 5:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<"|"<<endl<<endl;
          continue;
        case 6:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<"|"<<"\\"<<endl<<endl;
          continue;
        case 7:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<"|"<<"\\"<<endl<<" |"<<endl<<endl;
          continue;
        case 8:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<"|"<<"\\"<<endl<<" |"<<endl<<"/"<<endl<<endl;
          continue;

          // if mistakes go to 9 the game session is lost
        case 9:
          cout<<endl<<" |"<<endl<<" |"<<endl<<" O"<<endl<<"/"<<"|"<<"\\"<<endl<<" |"<<endl<<"/"<<" \\"<<endl<<endl;

          printf("\x1B[31m");
          cout<<"GAMEOVER!! You Lost. \n\n";
          printf("\033[0m");
          
          printf("\x1B[32m");
          cout<<"Do you wish to continue? \nEnter C for YES, Enter anything for NO: ";
          printf("\033[0m");

          // input if user wants to continue
          getline(cin, end);

          // if c or C the user can continue guessing and mistakes are reset
          if (end == "c" || end == "C") {

            // clear screen
            system("clear");

            // reset and restart loop
            mistakes = 0;
            continue;
          
            // otherwise win is false (aka lost the game) and the function ends
          } else {
            win = false;
            return 0;
          }
      }
    }
  }
  //if the loop is exited the game is won and this function ends
  win = true;
  return 0;
}