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
// gtkmm: the c++ gtk binding library for guis
// Makefile/compiler options must include the following:
// `pkg-config --cflags --libs gtkmm3.0`
#include <gtkmm.h>

// support for windows cross-compilation
#include <windows.h>

using namespace std;

// CLASSES////////////////////////////////////////////////

// HELPER FUNCTIONS///////////////////////////////////////


// INITIALIZE/////////////////////////////////////////////

void init() {
  //insert any initilization here
  // srand(time(NULL));

}

// MAIN //////////////////////////////////////////////////
int main(int argc, char const *argv[]) {
  init();

  // basic window taken from https://developer.gnome.org/gtkmm-tutorial/stable/sec-basics-simple-example.html.en
  auto app =
      Gtk::Application::create(argc, argv,
        "org.gtkmm.examples.base");

    Gtk::Window window;
    window.set_default_size(200, 200);

    return app->run(window);

  return 0;
}
