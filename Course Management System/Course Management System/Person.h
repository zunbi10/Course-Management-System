#pragma once
#include <string>
#include<iostream>
using namespace std;

class Person
{
private: 
	string id;
	string name;
	string address;
	string phoneNumber;

public:
	Person(string Id,
		string name,
		string address,
		string phoneNumber);
	string toString();
	string getID();
	string getName();
	string getAddress();
	string getPhoneNumber();
};



