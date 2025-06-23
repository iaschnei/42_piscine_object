#ifndef FORM_HPP
#define FORM_HPP

enum class FormType
{
    CourseFinished,
    NeedMoreClassRoom,
    NeedCourseCreation,
    SubscriptionToCourse
};

class Form
{
protected:
    FormType _formType;
    bool approved;

public:
    virtual ~Form() = default;

    Form(FormType p_formType)
    {
        this->_formType = p_formType;
    }

    FormType get_formType() { return _formType; }
    virtual void approve() = 0;
    virtual void execute() = 0;
};


#endif //FORM_HPP
