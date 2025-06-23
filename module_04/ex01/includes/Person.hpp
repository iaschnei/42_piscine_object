#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class Room;

class Person
{
private:
    std::string _name;
    Room* _currentRoom;
public:
    Person(std::string p_name) {
        this->_name = p_name;
    }
    Room* room() {return (_currentRoom);}
};

#endif //PERSON_HPP
