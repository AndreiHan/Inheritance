#include "stdafx.h"
#include "Student.h"
#include "Teacher.h"
#include "Persoana.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	Student Student1, Student2, Student3;
	Teacher Teacher1;

	Student1.setAge(20);
	Student1.setCity("NY");
	Student1.setFirstName("Ion");
	Student1.setLastName("Vasile");
	Student1.setPhone(8232354);
	cout << Student1.getAge();

	cout << Student1.getFirstName() << " y ";
	cout << Student2.getFirstName();
	return 0;
}

