#include "Agency.hpp"
#include "Car.hpp"

Agency::Agency(){
    
}
Agency::Agency(const char * name, const int * zip){
    
}

Car & Agency::operator[](int index){
    return m_inventory[index];
}

const char * Agency::getName() const{
    return m_name;
}

void Agency::setName(const char * name){
    //Agency * p_Agency = Agency.name;
    //char * p_name = name;
    int n = 0;
    do {
        m_name[n] = name[n];
        n++;
    } while(name[n-1] != '\0');
}

const int Agency::getZip() const{
    return m_zipcode;
}
void Agency::setZip(const int zip){
    m_zipcode = zip;
}

/*const Car & Agency::getInventory() const{
    return m_inventory;
}

void Agency::setInventory(Agency * arrAgency, const int year, const char * make, const char * model){
    
    setYear(year);
    //setMake(make);
    //setModel(model);
}*/
