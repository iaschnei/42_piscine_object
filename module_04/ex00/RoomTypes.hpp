#ifndef ROOMTYPES_HPP
#define ROOMTYPES_HPP

class Classroom : public Room
{
private:
    Course* _currentRoom;

public:
    Classroom();
    void assignCourse(Course* p_course);
};

class SecretarialOffice: public Room
{
private:
    std::vector<Form*> _archivedForms;

public:

};

class HeadmasterOffice : public Room
{
private:

public:

};

class StaffRestRoom : public Room
{
private:

public:

};

class Courtyard : public Room
{
private:

public:

};

#endif //ROOMTYPES_HPP
