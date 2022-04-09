#ifndef CARTOTECA_H
#define CARTOTECA_H

#include <string>
#include <iostream>

using namespace std;

class Student {
private:
	string firstName;
	string lastName;
	string group;
public:
	Student();
	~Student();
	void setfirstName(string name);
	void setlastName(string name);
	void setGroup(string name);
	string getfirstName() const;
	string getlastName() const;
	string getGroup() const;
	friend ostream& operator<<(ostream& a, const Student& x);
	friend istream& operator>>(istream& b, Student& c);
	Student& operator=(const Student& h);
};
#endif