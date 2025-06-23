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
private:
    FormType _formType;

public:
    virtual ~Form() = default;

    Form(FormType p_formType)
    {
        //TODO: remove (for compilation errors)
        if (p_formType == FormType::CourseFinished) {
            return ;
        }
    }

    virtual void execute() = 0;
};


#endif //FORM_HPP
