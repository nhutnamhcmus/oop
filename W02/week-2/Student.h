//
// Created by sakur on 9/6/2020.
//

#ifndef WEEK_2_STUDENT_H
#define WEEK_2_STUDENT_H
#include <string>

class Student {
private:
    std::string firstName;
    std::string middleName;
    std::string lastName;

public:
    // constructors
    Student(std::string firstName, std::string middleName, std::string lastName);

    Student();

    ~Student();

    // getters and setters
    [[nodiscard]] const std::string &getFirstName() const;

    void setFirstName(const std::string &firstName);

    [[nodiscard]] const std::string &getMiddleName() const;

    void setMiddleName(const std::string &middleName);

    [[nodiscard]] const std::string &getLastName() const;

    void setLastName(const std::string &lastName);
};


#endif //WEEK_2_STUDENT_H
