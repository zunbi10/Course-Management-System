#pragma once
#include "Person.h"
#include<list>
class Teacher :
    public Person
{
private:
    string department;
    double salary;
    string teacherId;
public:
    Teacher(string department, double salary,string teacherID,Person p);
    string getDepartment();
    double getSalary();
    string getTeacherId();
    string toString();
};

