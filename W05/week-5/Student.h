//
// Created by sakur on 9/15/2020.
//

#ifndef WEEK_5_STUDENT_H
#define WEEK_5_STUDENT_H
#include <string>

class Student {
public:
    static int instanceCount;

private:
    std::string firstName;
    std::string middleName;
    std::string lastName;

public:
    Student(std::string firstName, std::string middleName, std::string lastName);
    Student();
    Student(const Student&);

    [[nodiscard]] const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    [[nodiscard]] const std::string &getMiddleName() const;

    void setMiddleName(const std::string &middleName);

    [[nodiscard]] const std::string &getLastName() const;

    void setLastName(const std::string &lastName);

    Student& operator=(const Student&);
};


#endif //WEEK_5_STUDENT_H
