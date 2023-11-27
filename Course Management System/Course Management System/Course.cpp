#include "Course.h"

Course::Course(string courseID, string name, string profressor, int maxCapacity, string schedule)
{
		this->courseID = courseID,
		this->name = name,
		this->profressor = profressor;
		this->maxCapacity = maxCapacity;
		this->schedule = schedule;
}

string Course::toString()
{
	return "CourseID: " + this->courseID
		+ "\nCourseName: " + this->name
		+ "\nProfessor: " + this->profressor
		+ "\nMaxCapacity: " + to_string(this->maxCapacity)
		+ "\nSchedule: " + this->schedule;
}


