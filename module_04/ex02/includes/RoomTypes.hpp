#ifndef ROOMTYPES_HPP
#define ROOMTYPES_HPP

#include <vector>
#include "Room.hpp"

class Form;
class Course;

class Classroom : public Room
{
private:
    Course* _currentRoom{};

public:
    Classroom() = default;
    void assignCourse(Course* p_course);
};

class SecretarialOffice: public Room
{
private:
    std::vector<Form*> _archivedForms;

public:
    SecretarialOffice() = default;
};

class HeadmasterOffice : public Room
{
private:

public:
    HeadmasterOffice() = default;
};

class StaffRestRoom : public Room
{
private:

public:
    StaffRestRoom() = default;
};

class Courtyard : public Room
{
private:

public:
    Courtyard() = default;
};

#endif //ROOMTYPES_HPP
