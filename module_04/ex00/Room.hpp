#ifndef ROOM_HPP
#define ROOM_HPP

class Room {

public:
    Room();
    bool canEnter(Person*);
    void enter(Person*);
    void exit(Person*);

    void printOccupant();

private:
    long long ID;
    std::vector<Person*> _occupants;
};

#endif //ROOM_HPP
