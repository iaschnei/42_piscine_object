
#ifndef COURSE_HPP
#define COURSE_HPP

class Course {

public:
    Course(std::string p_name);
    void assign(Professor* p_professor);
    void subscribe(Student* p_student);

private:
    std::string _name;
    Professor* _responsable;
    std::vector<Student*> _students;
    int _numberOfClassToGraduate;
    int _maximumNumberOfStudent;
};

#endif //COURSE_HPP
