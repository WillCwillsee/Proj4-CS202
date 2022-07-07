#ifndef Agency_hpp
#define Agency_hpp
#include "Car.hpp"

//const int MAX_SIZE = 256;

class Agency{
public:
    friend class Car;
    friend void setYear(const int year);
    Agency();
    Agency(const char * name, const int * zip);
    
    Car & operator[](int index);
    
    const char * getName() const;
    void setName(const char * name);
    
    const int getZip() const;
    void setZip(const int zip);
    
    const Car & getInventory() const;
    void setInventory(Agency * arrAgency, const int year);
    
private:
    char m_name[256];
    int m_zipcode;
    Car m_inventory[5];
};


#endif /* Agency_hpp */
