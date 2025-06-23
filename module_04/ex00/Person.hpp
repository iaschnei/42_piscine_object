#ifndef PERSON_HPP
#define PERSON_HPP

class Person
{
private:
    std::string _name;
    Room* _currentRoom;
public:
    Personne(std::string p_name);
    Room* room() {return (_currentRoom);}
};

#endif //PERSON_HPP
