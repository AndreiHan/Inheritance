#include "stdafx.h"
#include "Persoana.h"
#include <string>


Persoana::Persoana()
{
}
#include "stdafx.h"
#include "Student.h"
#include <string>
#include <iostream>
using namespace std;

void Persoana::setFirstName(string Name)
{
	Name = FirstName;
}

void Persoana::setLastName(string Name)
{
	Name = LastName;
}

void Persoana::setAge(int inAge)
{
	inAge = Age;
}

void Persoana::setCity(string inCity)
{
	inCity = City;
}

void Persoana::setPhone(int inPhone)
{
	inPhone = Phone;
}

string Persoana::getFirstName()
{
	return FirstName;
}

string Persoana::getLastName()
{
	return LastName;
}

int Persoana::getAge()
{
	return Age;
}

string Persoana::getCity()
{
	return City;
}

int Persoana::getPhone()
{
	return Phone;
}

void Persoana::SitInClass()
{
	cout << "Sitting in main theater" << endl;
}


Persoana::~Persoana()
{
}
