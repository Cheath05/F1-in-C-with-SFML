#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

class F1{
    public:
    F1(){
        m_name = "";
        m_acceleration = 0;
        m_speed = 0;
        m_handling = 0;
        m_total_time = 0;
    }

    F1(string name, double speed, double acceleration, double handling,double total){
        m_name = name;
        m_speed = speed;
        m_acceleration = acceleration;
        m_handling = handling;
        m_total_time = total;
    }

    string getName(){
        return m_name;
    }

    double getSpeed(){
        return m_speed;
    }

    double getAcceleration(){
        return m_acceleration;
    }

    double getHandling(){
        return m_handling;
    }

    double getTime(){
        return m_total_time;
    }

    void setName(string name){
        m_name = name;
    }

    void setSpeed(double speed){
        m_speed = speed;
    }

    void setAcceleration(double acceleration){
        m_acceleration = acceleration;
    }

    void setHandling(double handling){
        m_handling = handling;
    }

    void setTime(double time){
        m_total_time = time;
    }

    double simulateLap(){
        
    }
    

    private:
    string m_name;
    double m_speed;
    double m_acceleration;
    double m_handling;
    double m_total_time;
};

int main(){

    return 0;
}