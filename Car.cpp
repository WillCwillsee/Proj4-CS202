#include "Car.hpp"

const int Car::getYear() const {
    return m_year;
}

/* Public Facilitator method for the Year of the Car */
void Car::setYear(const int year) {
    m_year = year;
}

/* Public Accesor method for the Make of the Car */
const char * Car::getMake()const{
    return m_make;
}

/* Public Facilitator method for the Make of the Car */
void Car::setMake(const char * make){
    int n = 0;
    do {
        m_make[n] = make[n];
        n++;
    } while(make[n-1] != '\0');
}

/* Public Accesor method for the Model of the Car */
const char * Car::getModel() const{
    return m_model;
}

/* Public Facilitator method for the Model of the Car */
void Car::setModel(const char * model){
    int n = 0;
    do {
        m_model[n] = model[n];
        n++;
    } while(model[n-1] != '\0');
}
