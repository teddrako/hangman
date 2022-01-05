#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// rules and stuff
void introtext();

// game code
int hangman(string word[]);

// win or lose screen
void close(bool ending);

// global variable intitialization, extern for all files
extern bool win;
extern string wword;