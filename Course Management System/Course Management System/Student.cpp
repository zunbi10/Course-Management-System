#include "Student.h"


Student::Student(string majors, string grades, Person p)
	:Person(p.getID(), p.getName(), p.getAddress(), p.getPhoneNumber())

{
	this->majors=majors;
	this->grades=grades;
}

string Student::toString()
{
	return Person::toString()
		+ "\nMajors: " + this->majors
		+ "\nGrades: " + this->grades;
}

void Student::readFile(const string& fileName)
{
    ifstream inputFile(fileName);

    if (inputFile.is_open()) {
        string line;
        string studentID, name, address,phone,majors,grades;

        while (getline(inputFile, line)) {
            if (line.find("StudentID:") == 0) {
                studentID = line.substr(11);
            }
            else if (line.find("Name:") == 0) {
                name = line.substr(6);
            }
            else if (line.find("Address:") == 0) {
                address = line.substr(9);
            }
            else if (line.find("Phone:") == 0) {
                phone = line.substr(7);
            }
            else if (line.find("Majors:") == 0) {
                majors = line.substr(8);
            }
            else if (line.find("Grades:") == 0) {
                grades = line.substr(8);
                studentList.push_back(Student(majors, grades, Person(studentID, name, address, phone)));
            }
        }

        inputFile.close();
    }
    else {
        cout << "Can't read file!" << endl;
    }
}

bool Student::writeFile(Student stu)
{
    this->studentList.push_back(stu);
    ofstream fileOut("Student.txt", ios::app);

    if (fileOut.is_open()) {
        fileOut << stu.toString() << endl;
    }
    else {
        cerr << "Can not open file and write." << endl;
    }

    fileOut.close();
    return true;
}

void Student::getViewStudent()
{
    cout << "Danh sach cac loai sach hien co tai thu vien:\n";
    for (auto& stu : this->studentList) {
        cout << stu.toString() << "\n\n";
    }
}

