#ifndef Car_hpp
#define Car_hpp
#include <iostream>
#include <fstream>
#include "Sensor.hpp"
#include "Agency.hpp"

using namespace std;

const int ARR_SZ = 10;
const int NAME_SZ = 256;

class Car{
public:
    friend class Agency;
    
    const int getYear() const;
    void setYear(const int year);
    
    const char * getMake() const;
    void setMake(const char * make);
    
    const char * getModel() const;
    void setModel(const char * model);
    
private:
    
    int m_year;
    char m_make[ARR_SZ];
    char m_model[ARR_SZ];
    float m_baseprice;
    Sensor m_sensors[3];
    float m_finalprice;
    bool m_available;
    char m_owner[NAME_SZ];
};

#endif /* Car_hpp */
