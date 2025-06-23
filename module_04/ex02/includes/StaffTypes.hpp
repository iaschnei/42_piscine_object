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

    void receiveForm(Form* p_form) {
        _formToValidate.push_back(p_form);
    }

    void validateForms() {
        for (auto form : _formToValidate) {
            form->approve();
            form->execute();
        }
    }
};

class Secretary : public Staff
{
private:

public:
    Secretary(std::string name): Staff(name) {
    }

    Form* createForm(FormType p_formType) {
        switch(p_formType) {
            case FormType::CourseFinished:
                return new CourseFinishedForm();
            case FormType::NeedMoreClassRoom:
                return new NeedMoreClassRoomForm();
            case FormType::NeedCourseCreation:
                return new NeedCourseCreationForm();
            case FormType::SubscriptionToCourse:
                return new SubscriptionToCourseForm();
            default:
                return nullptr;
        }

    }
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
