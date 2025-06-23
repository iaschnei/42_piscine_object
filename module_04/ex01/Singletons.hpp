#ifndef SINGLETONS_HPP
#define SINGLETONS_HPP

#include "includes/Student.hpp"
#include "includes/Staff.hpp"
#include "includes/Course.hpp"
#include "includes/Room.hpp"

#include <vector>

template<class T> class Singleton {

public:
    // Ensure we can't create a copy
    Singleton(Singleton const&) = delete;
    Singleton& operator=(Singleton const&) = delete;

    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }

    void add_item(T *object) {
        if (object == NULL) {
            return ;
        }
        this->object_list.push_back(object);
    }

    void remove_item(int index) {
        this->object_list.erase(this->object_list.begin() + index);
    }

    T* get_item(int index) {
        if (index >= this->object_list.size()) {
            return NULL;
        }
        return this->object_list.at(index);
    }

    std::vector<T *> get_all_items() {
        return this->object_list;
    }

    int get_size() {
        return this->object_list.size();
    }

private:
    Singleton() = default;

    std::vector<T *> object_list;

};

// Type definitions for user friendliness
using StudentList = Singleton<Student>;
using StaffList = Singleton<Staff>;
using CourseList = Singleton<Course>;
using RoomList = Singleton<Room>;


#endif
