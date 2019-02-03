#include "stdafx.h"
#include "Teacher.h"
#include <string>
#include <iostream>
using namespace std;


Teacher::Teacher()
{
}

void Teacher::setFirstName(string Name)
{
	Name = FirstName;
}

void Teacher::setLastName(string Name)
{
	Name = LastName;
}

void Teacher::setAge(int inAge)
{
	inAge = Age;
}

void Teacher::setCity(string inCity)
{
	inCity = City;
}

void Teacher::setPhone(int inPhone)
{
	inPhone = Phone;
}

string Teacher::getFirstName()
{
	return FirstName;
}

string Teacher::getLastName()
{
	return LastName;
}

int Teacher::getAge()
{
	return Age;
}

string Teacher::getCity()
{
	return City;
}

int Teacher::getPhone()
{
	return Phone;
}

void Teacher::GradeStudent()
{
	std::cout<<"Student graded";
}

void Teacher::SitInClass()
{
	cout << "Sitting at front of class" << endl;
}


Teacher::~Teacher()
{
}
