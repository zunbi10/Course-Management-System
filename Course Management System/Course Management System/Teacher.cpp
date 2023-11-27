#include "Teacher.h"
#include <iomanip>
#include <sstream>
Teacher::Teacher(string department, double salary,string teacherId, Person p)
    :Person(p.getID(), p.getName(), p.getAddress(), p.getPhoneNumber())
{
    this->department = department;
    this->salary = salary;
    this->teacherId = teacherId;
}

string Teacher::getDepartment()
{
    return this->department;
}

double Teacher::getSalary()
{
    return this->salary;
}

string Teacher::getTeacherId()
{
    return this->teacherId;
}

string Teacher::toString()
{
    ostringstream oss;
    oss << Person::toString()
        << "\nDepartment: " << this->department
        << "\nSalary: " << std::fixed << std::setprecision(2) << this->salary<<" USD";
    return oss.str();
}
