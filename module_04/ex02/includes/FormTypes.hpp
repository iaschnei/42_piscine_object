#ifndef FORMTYPES_HPP
#define FORMTYPES_HPP

#include <iostream>
#include "Colors.hpp"
#include "Course.hpp"
#include "Form.hpp"
#include "Room.hpp"
#include "RoomTypes.hpp"
#include "Singletons.hpp"
#include "Student.hpp"

class CourseFinishedForm : public Form
{
private:
    Course* course;

public:

    CourseFinishedForm(): Form(FormType::CourseFinished) {
    }

    void set_course(Course* p_course) {
        course = p_course;
    }

    void approve() {
        if (course != nullptr) {
            this->approved = true;
        }
    }

    void execute() {
        if (this->approved) {
            std::cout << GREEN << "Course finished form executed" << RESET << std::endl;
        }
    }
};

class NeedMoreClassRoomForm : public Form
{
private:
    RoomList* room_list;

public:

    NeedMoreClassRoomForm(): Form(FormType::NeedMoreClassRoom) {
    }

    void set_room_list(RoomList* p_room_list) {
        room_list = p_room_list;
    }

    void approve() {
        if (room_list != nullptr) {
            this->approved = true;
        }
    }

    void execute() {
        if (this->approved) {
            std::cout << GREEN << "Need more classroom form executed" << RESET << std::endl;
            this->room_list->add_item(new Classroom());
        }
    }
};

class NeedCourseCreationForm : public Form
{
private:
    std::string course_name;
    CourseList* course_list;

public:

    NeedCourseCreationForm(): Form(FormType::NeedCourseCreation) {
    }

    void request_course_creation(std::string p_course_name) {
        course_name = p_course_name;
    }

    void set_course_list(CourseList* p_course_list) {
        course_list = p_course_list;
    }

    void approve() {
        if (course_list != nullptr && course_name != "") {
            this->approved = true;
        }
    }

    void execute() {
        if (this->approved) {
            std::cout << GREEN << "Need course creation form executed, new course added to list" << RESET << std::endl;
            course_list->add_item(new Course(course_name));
        }
    }
};

class SubscriptionToCourseForm : public Form
{
private:
    Student* student;
    Course* course;

public:

    SubscriptionToCourseForm(): Form(FormType::SubscriptionToCourse) {
    }

    void set_student(Student* p_student) {
        student = p_student;
    }

    void set_course(Course* p_course) {
        course = p_course;
    }

    void approve() {
        if (student != nullptr && course != nullptr) {
            this->approved = true;
        }
    }

    void execute() {
        if (this->approved) {
            std::cout << GREEN << "Subscription to course form executed" << RESET << std::endl;
            student->subscribe(course);
        }
    }
};

#endif //FORMTYPES_HPP
