#include <iostream>
#include "Time2.h"

using namespace std;

Time2::Time2(int h, int m, int s, string n)
:name(n)//this is how we need to initialize the const members
{
    try{
        setHour(h).setMinute(m).setSecond(s);
    }catch(const char * e){
        throw e;
    }
}

Time2::~Time2()
{

}

int Time2::getHour() const
{
    return hour;
}

int Time2::getMinute() const
{
    return minute;
}

int Time2::getSecond() const
{
    return second;
}

string Time2::getName() const
{
    return name;
}

/*string Time2::getMorning() const
{

    if(hour >=5 && hour <=11){
      return morning;
    }else{
        throw "not morning";
    }
}
*/
Time2& Time2::setHour(int h)
{
    if(h >=0 && h <=23){
        hour = h;
        return *this;
    }else{
        throw "Invalid Hour";
    }

}

Time2& Time2::setMinute(int m)
{
     if(m >=0 && m <=59){
        minute = m;
        return *this;
    }else{
        throw "Invalid Minute";
    }
}

Time2& Time2::setSecond(int s)
{
     if(s >=0 && s <=59){
        second = s;
        return *this;
    }else{
        throw "Invalid Second";
    }
}

bool Time2::operator == (Time2 rht)
{
    if(hour == rht.getHour() && minute == rht.getMinute() && second == rht.getSecond()){
        return true;
    }else{
        return false;
    }
}



bool Time2::operator !=(Time2 rht)
{
    return !(*this == rht);
}



Time2& Time2::printTime()
{
    cout << hour << ":" << minute << ":" << second << " " << name << endl;
    return *this;
}


/*
Time2& Time2::operator++()
{
    if(hour == 24){
        minute = 0;
        second = 0;
        hour = 2;

}else{
    throw "++ operator not working";
    }
    return *this;
}


*/

Time2& Time2::operator++()
{
    hour++;
    return *this;
}


Time2 Time2::operator+(unsigned int addTime)
{
    for(int i = 0; i < addTime; i++){
        ++(*this);
    }
    return *this;
}//this code is extremely buggy


Time2& Time2::timeName()
{
    if(hour >= 5 && hour <= 11){
        cout << "It is currently " << hour << ":" << minute << ":" << second << name << "in the morning" <<endl;

    }else if(hour >= 12 && hour <= 20){
        cout << hour << ":" << minute << ":" << second << name << "in the afternoon" <<endl;

    }else{
        cout << hour << ":" << minute << ":" << second <<  name << "in the evening" <<endl;
    }

    return *this;
}
