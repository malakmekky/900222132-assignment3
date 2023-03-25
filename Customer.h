#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;


class Customer: public Person
{
    private:
        int id;
        Appointment appointment;
    public:
        Customer()
        {
            id = 0;
            appointment.hrs = 0;
            appointment.mins = 0;
        }
        void setMechanicID(int m)
        {
            id = m;
        }
        void setAppointment(int h, int m)
        {
            appointment.hrs = h;
            appointment.mins = m;
        }
        int getMechanicID()
        {
            return id;
        }
        Appointment getAppointment()
        {
            return appointment;
        }
        bool operator < (Customer x)
        {
            if(appointment.hrs < x.appointment.hrs)
            {
                return true;
            }
            else if(appointment.hrs == x.appointment.hrs)
            {
                if(appointment.mins < x.appointment.mins)
                {
                    return true;
                }
            }
            return false;
        }
        bool operator > (Customer x)
        {
            if(appointment.hrs > x.appointment.hrs)
            {
                return true;
            }
            else if(appointment.hrs == x.appointment.hrs)
            {
                if(appointment.mins > x.appointment.mins)
                {
                    return true;
                }
            }
            return false;
        }
        bool operator == (Customer x)
        {
            if(appointment.hrs == x.appointment.hrs && appointment.mins == x.appointment.mins)
            {
                return true;
            }
            return false;
        }
};
