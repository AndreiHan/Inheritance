#include "stdafx.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;


Student::Student()
{
}

void Student::setFirstName(string Name)
{
	Name = FirstName;
}

void Student::setLastName(string Name)
{
	Name = LastName;
}

void Student::setAge(int inAge)
{
	inAge = Age;
}

void Student::setCity(string inCity)
{
	inCity = City;
}

void Student::setPhone(int inPhone)
{
	inPhone = Phone;
}

string Student::getFirstName()
{
	return FirstName;
}

string Student::getLastName()
{
	return LastName;
}

int Student::getAge()
{
	return Age;
}

string Student::getCity()
{
	return City;
}

int Student::getPhone()
{
	return Phone;
}

void Student::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}


Student::~Student()
{
}
