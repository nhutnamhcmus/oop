//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_5_TIME_H
#define WEEK_5_TIME_H


class Time {
public:
    static int instanceCount;

private:
    int second;
    int minute;
    int hour;

public:
    Time(int second, int minute, int hour);
    Time();
    Time(const Time&);

    [[nodiscard]] int getSecond() const;

    void setSecond(int second);

    [[nodiscard]] int getMinute() const;

    void setMinute(int minute);

    [[nodiscard]] int getHour() const;

    void setHour(int hour);

    Time& operator=(const Time&);
};


#endif //WEEK_5_TIME_H
