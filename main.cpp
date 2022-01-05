// include all header code
#include "all.h"

// determines if you won for the closing statement
bool win;

// global variable for the guessing word
string wword;

int main() {

  // array of all guessable words
  string word[5] = {"lamborghini", "ferrari", "porsche", "mclaren", "teddrako"};
  
  // rules and begin game 
  introtext();

  // actual game code
  hangman(word);
  
  // win or lose determination
  if (win == true) {

    // win
    close(true);
  } else if (win == false) {

    // lose
    close(false);
  }
}