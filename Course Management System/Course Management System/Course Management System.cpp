#include <iostream>
#include <string>
#include <Windows.h>

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
using namespace std;

int main()
{
	system("cls");
	system("color 02");
	Person p = Person("22122714", "Thanh Duy", "VLXD Thanh Duy", "0931811765");
	//cout<<p.toString();
	
	Student st = Student("Computer Scient", "IT1203", p);
	//st.writeFile(st);
	//cout << st.toString();
	st.readFile("Student.txt");
	st.getViewStudent();
	Teacher tc = Teacher("Nguyen Van Trang", 1000, "TD001", p);
	//cout << tc.toString();
	Course c = Course("IT302", "Lap Trinh Nang Cao", "Tran Thi Truong Thi", 40, "2332");
	//cout<<c.toString();
}

