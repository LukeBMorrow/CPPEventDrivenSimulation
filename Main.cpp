/*
 * A2main.cpp
 * COMP 2150 Object Orientation
 * (C) Computer Science, University of Manitoba
 *
 * Main function for Assignment 2
 */

#include <iostream>
#include <cstdlib>
#include "A2Const.hpp"
#include "Controller.hpp"
using namespace std;

int main(int argc, char *argv[]){
  if(argc < 2){
    cout << "Usage: " << argv[0] << " <file name>\n";
    exit(1);
  }
  cout << "Simulation begins...\n";
  Controller *director = new Controller(argv[1]);
  cout << "\n...Simulation complete.\n\n";
  cout << "\nEnd of processing.\n";
  return 0;
}// main
