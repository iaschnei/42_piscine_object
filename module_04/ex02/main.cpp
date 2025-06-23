#include "includes/FormTypes.hpp"
#include "includes/StaffTypes.hpp"

int main() {
    Secretary* secretary = new Secretary("Secretary Alex");
    Headmaster* headmaster = new Headmaster("Head Clemence");

    Student* student = new Student("John");
    Course* course = new Course("Mathematics 101");


    std::cout << YELLOW << "------- FORM CREATION AND PROCESSING -------" << RESET << std::endl;

    std::cout << YELLOW << "\nCreating and processing Course Creation Form:" << RESET << std::endl;
    Form* courseCreationForm = secretary->createForm(FormType::NeedCourseCreation);
    auto* creationForm = dynamic_cast<NeedCourseCreationForm*>(courseCreationForm);
    creationForm->request_course_creation("Advanced Physics");
    creationForm->set_course_list(&CourseList::getInstance());
    headmaster->receiveForm(courseCreationForm);

    std::cout << YELLOW << "\nCreating and processing Course Subscription Form:" << RESET << std::endl;
    Form* subscriptionForm = secretary->createForm(FormType::SubscriptionToCourse);
    auto* subForm = dynamic_cast<SubscriptionToCourseForm*>(subscriptionForm);
    subForm->set_student(student);
    subForm->set_course(course);
    headmaster->receiveForm(subscriptionForm);

    std::cout << YELLOW << "\nCreating and processing Need More Classroom Form:" << RESET << std::endl;
    Form* classroomForm = secretary->createForm(FormType::NeedMoreClassRoom);
    auto* roomForm = dynamic_cast<NeedMoreClassRoomForm*>(classroomForm);
    roomForm->set_room_list(&RoomList::getInstance());
    headmaster->receiveForm(classroomForm);

    std::cout << YELLOW << "\nCreating and processing Course Finished Form:" << RESET << std::endl;
    Form* courseFinished = secretary->createForm(FormType::CourseFinished);
    auto* courseFinish = dynamic_cast<CourseFinishedForm*>(courseFinished);
    courseFinish->set_course(course);
    headmaster->receiveForm(courseFinished);

    std::cout << YELLOW << "\nHeadmaster processing all forms:" << RESET << std::endl;
    headmaster->validateForms();

    delete secretary;
    delete headmaster;
    delete student;
    delete course;

    return 0;

}
