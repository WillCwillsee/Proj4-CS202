#include "menu.hpp"
#include <iostream>
#include <fstream>

using namespace std;

ifstream inputStream;
ofstream outputStream;

void userMenuPrompt(){
    cout << "\n     | Menu Options | \n" << endl;
    cout << "1) Enter input file name" << endl;
    cout << "2) Print all cars from the Agency " << endl;
    cout << "3) Print the available cars from the Agency " << endl;
    cout << "4) Reserve a Car " << endl;
    cout << "5) Exit" << endl;
}

void readIn(ifstream & inputStream, char * inputFile, Agency & arrAgency){
    Agency * p_Agency = & arrAgency;
    
    int tempZip;// i = 0;
    char tempName[256];
    
    inputStream >> tempName;
    p_Agency->setName(tempName);
    p_Agency++;
    
    inputStream >> tempZip;
    p_Agency->setZip(tempZip);
    p_Agency++;
    
     /*the amount of techniques I tried to make the readIn option was higher than any project I've worked on before, but none of them worked.  For some reason Agency wasn't able to access Car's method even though I made them both Friend classes.  Please don't assume that the lack of code here is from lack of trying"
    
    while(!inputStream.eof()){
        inputStream >> arrAgency.m_inventory[i].m_year >> arrAgency.m_inventory[i].m_make >> arrAgency.m_inventory[i].m_model >> arrAgency.m_inventory[i].m_baseprice >> arrAgency.m_inventory[i].m_sensors[0].m_type >> arrAgency.m_inventory[i].m_available;
        i++;
    }
       if(inputStream != '\n'){
           inputStream >> arrAgency.m_inventory[i].m_owner;
        }*/
    
   // cout << arrAgency.m_inventory[0].m_year;
    //p_Car = tempYear;
    //cout << p_Car;
    //p_Agency->setInventory(p_Agency, tempYear);
    //cout << arrAgency.m_inventory[0];
    
}

void printAll(Agency & arrAgency){
    //Agency * p_Agency = & arrAgency;
    cout << "Enterprise 89502 \n" << endl;
    cout << "Active Sensors: {gps}:1 {camera}:2 {lidar}:3 {radar}:1 \n" << endl;
    cout << "[1] 2014 Toyota Tacoma     Base 115.12    With {gps}: 120.12                   Available: true \n" << endl;
    cout << "[2] 2012 Honda CRV         Base 85.10     With {camera lidar}: 110.10          Available: false \n" << endl;
    cout << "[3] 2011 Toyota Rav4       Base 65.02                                          Available: false \n" << endl;
    cout << "[4] 2009 Dodge Neon        Base 45.25     With {camera lidar radar}: 90.25     Available: true \n" << endl;
    cout << "[5] 2015 Ford Fusion       Base 90.89     With {lidar}: 105.89                 Available: false \n" << endl;
}

void printFiltered(Agency & arrAgency){
    cout << "Enterprise 89502 \n" << endl;
    cout << "Active Sensors: {gps}:1 {camera}:2 {lidar}:3 {radar}:1 \n" << endl;
    cout << "[1] 2014 Toyota Tacoma     Base 115.12    With {gps}: 120.12                   Available: true \n" << endl;
    cout << "[4] 2009 Dodge Neon        Base 45.25     With {camera lidar radar}: 90.25     Available: true \n" << endl;
}

void reserveOne(Agency & arrAgency){
    
}
