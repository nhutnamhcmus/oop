//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_5_DATE_H
#define WEEK_5_DATE_H
#include <string>
enum date_fmt {
    ddMMYYYY,
    MMddYYYY
};

class Date {
public:
    static int instanceCount;

private:
    int day;
    int month;
    int year;

public:
    Date();
    Date(const int &day, const int &month, const int &year);
    Date(const Date&);
    Date& operator=(const Date&);

    [[nodiscard]] int getDay() const;

    void setDay(int day);

    [[nodiscard]] int getMonth() const;

    void setMonth(int month);

    [[nodiscard]] int getYear() const;

    void setYear(int year);

    [[nodiscard]] std::string ToString() const;
    [[nodiscard]] std::string ToString(const std::string& separator) const;
    [[nodiscard]] std::string ToString(date_fmt) const;
};


#endif //WEEK_5_DATE_H
