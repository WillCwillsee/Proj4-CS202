#ifndef Sensor_hpp
#define Sensor_hpp

using namespace std;


class Sensor{
 public:
    friend class Car;
    
 private:
    char m_type[256];
    float m_extracost;
    static int gps_cnt;
    static int camera_cnt;
    static int lidar_cnt;
    static int radar_cnt;
    
};
#endif /* Sensor_hpp */
