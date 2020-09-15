//
// Created by sakur on 9/15/2020.
//

#include "Time.h"

Time::Time(int second, int minute, int hour) : second(second), minute(minute), hour(hour) {}

Time::Time() : second(0), minute(0), hour(0) {}

Time::Time(const Time &another) {
    *this = another;
}

int Time::getSecond() const {
    return second;
}

void Time::setSecond(int second) {
    Time::second = second;
}

int Time::getMinute() const {
    return minute;
}

void Time::setMinute(int minute) {
    Time::minute = minute;
}

int Time::getHour() const {
    return hour;
}

void Time::setHour(int hour) {
    Time::hour = hour;
}

Time &Time::operator=(const Time &another) {
    this->setSecond(another.getSecond());
    this->setMinute(another.getMinute());
    this->setHour(another.getHour());
    return *this;
}




