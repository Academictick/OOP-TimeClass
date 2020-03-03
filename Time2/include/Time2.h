#ifndef TIME2_H
#define TIME2_H

#include <iostream>

using namespace std;

class Time2
{
    public:
        Time2(int = 0, int = 0, int = 0, string = " ");//default values
        ~Time2();
        int getHour() const;
        int getMinute() const;
        int getSecond() const;
        string getName() const;

/*
        string getMorning() const;
        string getNoon() const;
        string getAfternoon() const;
        string getEvening() const;

*/
        bool operator == (Time2);
        bool operator != (Time2);
        Time2& operator ++ (); //prefix ++ cause why not (I find this code to increment properly difficult due to failsafes in cpp)
        Time2 operator + (unsigned int);
        Time2& timeName();
        Time2& printTime();
        Time2& setHour(int);
        Time2& setMinute(int);
        Time2& setSecond(int);

    protected:

    private:
        int hour;
        int minute;
        int second;
        const string name;//const object of a class

        /*
        const string morning;
        const string noon;
        const string afternoon;
        const string evening;

        */
};

#endif // TIME2_H
