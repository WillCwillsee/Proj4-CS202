#include "menu.hpp"
#include <iostream>
#include <fstream>

using namespace std;


int main(){
    /* Variable initialization*/
    ifstream inputStream;
    ofstream outputStream;
    int selection = 0;
    char inputFile[20];
    bool end = false;
    Agency arrAgency;
    
    /* Options menu with 6 inputs, including an exit function*/
    do {
        userMenuPrompt();
        cin >> selection;
        
        switch (selection)
        {
                
                /* Prompts the user for the name of the input file and stores that value in the char array inputFile. */
                
                
                /* I was never able to get this working and so the rest of my project does not work either. */
                
            case 1:
                cout << "\n Enter the name of the input file from which you wish to store the Rental Car data" << endl;
                cin >> inputFile;
                inputStream.open(inputFile);
                readIn(inputStream, inputFile, arrAgency);
                inputStream.close();
                break;
                
                /* Prints the Rental Agency information, stored in a array of class objects to the terminal*/
            case 2:
                printAll(arrAgency);
                break;
                
                /* Prints the */
            case 3:
                printFiltered(arrAgency);
                break;
                
                /*  Finds the cheapest, available car out of all 3 Rental Agencies */
            case 4:
                
                break;
                
                /*  Prompts the user for input: 1) a Rental Agency
                 2) a Car
                 3) the number of days to rent that car
                 It then reserves that car by changing the availability to False */

            case 5:
                
                end = true;
                break;
                
                /*  The default switch action which sends an error message if the user has entered a number other than 1-7. */
            default:
                cout << "\n****************************************************** \n";
                cout << "Invalid entry number. Please choose an option from 1-7 " << endl;
                cout << "****************************************************** \n" << endl;
                break;
                
        }
        
    } while(!end);
    return 0;
}
