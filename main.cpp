// Andrew Barlow
// Description:
//
// v 0.00

// LIBRARIES//////////////////////////////////////////////

// Input / Output Streams
#include <iostream>
// File Streams
#include <fstream>
// String Streams
#include <sstream>
// Strings
#include <string>
// Vectors
#include <vector>
// Random Number Generators
#include <random>
// Time
#include <time.h>


using namespace std;

// CLASSES////////////////////////////////////////////////

// HELPER FUNCTIONS///////////////////////////////////////
int ui() {
  int input;
  cin >> input;
  switch (input) {
    //
    case 1:
      // insert code
      break;
    case 0:
      return 0;
  }
  return 1;
}

void menu() {
  // print any recurring commands here
}

// INITIALIZE/////////////////////////////////////////////

void init() {
  //insert any initilization here
  // srand(time(NULL));
  menu();
}

// MAIN //////////////////////////////////////////////////
int main(int argc, char const *argv[]) {
  init();
  while (ui()) {
    menu();
  }

  return 0;
}
