#pragma once

#include <string>
using namespace std;
class Teacher
{
public:
	Teacher();

	void setFirstName(string Name);
	void setLastName(string Name);
	void setAge(int inAge);
	void setCity(string inCity);
	void setPhone(int inPhone);

	string getFirstName();
	string getLastName();
	int getAge();
	string getCity();
	int getPhone();

	void GradeStudent();
	void SitInClass();


	~Teacher();



private:
	string FirstName;
	string LastName;
	int Age;
	string City;
	int Phone;

};

