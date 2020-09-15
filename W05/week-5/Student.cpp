//
// Created by sakur on 9/15/2020.
//

#include "Student.h"

#include <utility>

Student::Student(std::string firstName, std::string middleName, std::string lastName) : firstName(std::move(
        firstName)), middleName(std::move(middleName)), lastName(std::move(lastName)) {}

const std::string &Student::getFirstName() const {
    return firstName;
}

void Student::setFirstName(const std::string &firstName) {
    Student::firstName = firstName;
}

const std::string &Student::getMiddleName() const {
    return middleName;
}

void Student::setMiddleName(const std::string &middleName) {
    Student::middleName = middleName;
}

const std::string &Student::getLastName() const {
    return lastName;
}

void Student::setLastName(const std::string &lastName) {
    Student::lastName = lastName;
}

Student &Student::operator=(const Student &another) {
    this->setFirstName(another.getFirstName());
    this->setMiddleName(another.getMiddleName());
    this->setLastName(another.getLastName());
    return *this;
}

Student::Student(const Student &another) {
    *this = another;
}

Student::Student() = default;
