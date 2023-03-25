#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

class Mechanic: public Person
{
    private:
        int counter;
        Appointment appointments[10];
    public:
        Mechanic()
        {
            counter = 0;
        }
        bool isAvailable(int h, int m)
        {
            
            for(int i = 0; i < counter; i++)
            {
                if(appointments[i].hrs == h && appointments[i].mins == m)
                {
                    return false;
                }
            }
            return true;
        }
        void setAppointment(int h, int m)
        {
            appointments[counter].hrs = h;
            appointments[counter].mins = m;
            counter++;
        }
        int getCounter()
        {
            return counter;
        }
        Appointment getAppointment(int i)
        {
            return appointments[i];
        }
};
