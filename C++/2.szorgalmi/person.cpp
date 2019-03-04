#include <iostream>
#include <fstream>
#include <vector>
#include "person.h"

using namespace std;

int main ()
{
	string name = "Read3.txt";
	ifstream file(name.c_str());
	vector<Person> vec;
	
	int a, db = 0;
	string n;
	while (!file.eof())
	{
		file >> a;
		file >> n;
		Person p = Person(a,n);
		vec.push_back(p);
		db++;
	}
	
	bool l = true;
	for (int i = 0; i < db; i++)
	{	
		if(vec[i].getAge() <= 20)
		{
			l = false;
		}
	}
	
	if(l)
	{
		cout << "Every person is over 20." << endl;
	}
	else
	{
		cout << "Not every person is over 20." << endl;
	}
}

Person::Person (int a, string n)
{
	_age = a;
	_name = n;
}

int Person::getAge()
{
	return _age;
}

void Person::setAge(int a)
{
	_age = a;
}