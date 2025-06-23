#ifndef STAFF_HPP
#define STAFF_HPP

#include "Person.hpp"
#include <string>

class Form;

class Staff : public Person
{
private:

public:
    Staff(std::string name): Person(name) {
    }

    void sign(Form* p_form);
};

#endif //STAFF_HPP
