#pragma once
class Persoana
{
public:
	Persoana();

	//setter

	void setFirstName(string Name);
	void setLastName(string Name);
	void setAge(int inAge);
	void setCity(string inCity);
	void setPhone(int inPhone);

	//getter

	string getFirstName();
	string getLastName();
	int getAge();
	string getCity();
	int getPhone();

	//functions





private:
	string FirstName;
	string LastName;
	int Age;
	string City;
	int Phone;

};

	~Persoana();
};

