#ifndef menu_hpp
#define menu_hpp
#include "Agency.hpp"
#include "Car.hpp"

/*  The Menu prompt which is seen by the user in the terminal.  Continues to prompt until the number 6 is entered by the user. */

void userMenuPrompt();

void readIn(ifstream & inputStream, char * inputFile, Agency & arrAgency);

void printAll(Agency & arrAgency);

void printFiltered(Agency & arrAgency);

void reserveOne(Agency * arrAgency);
#endif /* menu_hpp */
