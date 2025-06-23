#ifndef STAFFTYPES_HPP
#define STAFFTYPES_HPP

#include "Staff.hpp"
#include "Form.hpp"
#include <vector>

class Course;

class Headmaster : public Staff
{
private:
    std::vector<Form*> _formToValidate;

public:
    Headmaster(std::string name): Staff(name) {
    }

    void receiveForm(Form* p_form);
};

class Secretary : public Staff
{
private:

public:
    Secretary(std::string name): Staff(name) {
    }

    Form* createForm(FormType p_formType);
    void archiveForm();
};

class Professor : public Staff
{
private:
    Course* _currentCourse;

public:
    Professor(std::string name): Staff(name) {
    }

    void assignCourse(Course* p_course);
    void doClass();
    void closeCourse();
};

#endif //STAFFTYPES_HPP
