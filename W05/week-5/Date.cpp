//
// Created by sakur on 9/15/2020.
//

#include "Date.h"
#include <sstream>

Date::Date(const int &day, const int &month, const int &year) : day(day), month(month), year(year) {}

Date::Date(): day(0), month(0), year(0) {}

Date::Date(const Date &another) {
    *this = another;
}

Date &Date::operator=(const Date &another) {
    this->setDay(another.getDay());
    this->setMonth(another.getMonth());
    this->setYear(another.getYear());
    return *this;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

std::string Date::ToString() const {
    std::stringstream writer;
    writer << this->getDay() << "/" << this->getMonth() << "/" << this->getYear();
    return writer.str();
}

std::string Date::ToString(date_fmt fmt) const {
    std::stringstream writer;
    switch (fmt) {
        case ddMMYYYY:
            writer << this->getDay() << "/" << this->getMonth() << "/" << this->getYear();
            return writer.str();
        case MMddYYYY:
            writer << this->getMonth() << "/" << this->getDay() << "/" << this->getYear();
            return writer.str();
        default:
            return "This type is not supported.";
    }
}

std::string Date::ToString(const std::string& separator) const {
    std::stringstream writer;
    writer << this->getDay() << separator << this->getMonth() << separator << this->getYear();
    return writer.str();
}
