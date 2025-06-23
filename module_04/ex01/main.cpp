#include "Singletons.hpp"
#include "includes/Colors.hpp"
#include "includes/StaffTypes.hpp"
#include "includes/Student.hpp"
#include "includes/Course.hpp"
#include <iostream>

#include "includes/RoomTypes.hpp"

int main() {

    std::cout << YELLOW << "------- STUDENT LIST -------" << RESET << std::endl;

    Student *student1 = new Student("John");
    Student *student2 = new Student("Michel");
    Student *student3 = new Student("Lucie");

    StudentList &student_list = StudentList::getInstance();
    student_list.add_item(student1);
    student_list.add_item(student2);
    student_list.add_item(student3);

    std::cout << BLUE << "List size : " << student_list.get_size() << RESET << std::endl;

    student_list.remove_item(1);

    std::cout << BLUE << "List size : " << student_list.get_size() << RESET << std::endl;


    std::cout << YELLOW << "------- STAFF LIST -------" << RESET << std::endl;

    Professor *professor = new Professor("Prof Mike");
    Headmaster *headmaster = new Headmaster("Head Clemence");
    Secretary *secretary = new Secretary("Secretary Alex");

    StaffList &staff_list = StaffList::getInstance();
    staff_list.add_item(professor);
    staff_list.add_item(headmaster);
    staff_list.add_item(secretary);

    std::cout << BLUE << "List size : " << staff_list.get_size() << RESET << std::endl;

    std::cout << YELLOW << "------- ROOM LIST -------" << RESET << std::endl;

    Classroom *classroom = new Classroom();
    SecretarialOffice *secretarial_office = new SecretarialOffice();
    HeadmasterOffice *headmaster_office = new HeadmasterOffice();
    StaffRestRoom *staff_rest_room = new StaffRestRoom();
    Courtyard *courtyard = new Courtyard();

    RoomList &room_list = RoomList::getInstance();
    room_list.add_item(classroom);
    room_list.add_item(secretarial_office);
    room_list.add_item(headmaster_office);
    room_list.add_item(staff_rest_room);
    room_list.add_item(courtyard);

    std::cout << BLUE << "List size : " << room_list.get_size() << RESET << std::endl;

    std::cout << YELLOW << "------- COURSE LIST -------" << RESET << std::endl;

    Course *course = new Course("Course 1");

    CourseList &course_list = CourseList::getInstance();
    course_list.add_item(course);

    std::cout << BLUE << "List size : " << course_list.get_size() << RESET << std::endl;
}
