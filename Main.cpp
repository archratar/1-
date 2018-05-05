#include <iostream>
#include <string>
#include "organization.h"

using namespace std;

int main(int argc, char** argv) {
	string name = "Vasya";
	string surname = "Pupkin";
	string middleName = "Olegovich";
	string date = "23.04.11";
	string sex = "male";
	
	string organization = "Org";
	string profession = "prof";
	string diplomaIn = "CS";
	string position = "junior";
	int salary = 100;
	int workExperience = 2; 

	Person person(name, surname, middleName, date, sex);	
	Employee employee(organization, profession, diplomaIn, position, salary, workExperience, person);
	Person person1, person2;
	Employee employee1, employee2;
	
	cin >> person1 >> person2;
	cin >> employee1 >> employee2;
	employee1.bind(person1);
	employee2.bind(person2);
	
	// late binding
	Person *p = &person;
	p = &employee;
	p->info();

	vector<Employee> employees;
	vector<Employee> :: iterator i;
	employees.push_back(employee);
	employees.push_back(employee1);
	employees.push_back(employee2);
	
	int countMaxExp = 0;
	for(i = employees.begin(); i != employees.end(); i++) {
		if (i->getWorkExperience() > workExperience)
			countMaxExp++;
	}
	cout << "Employees with exp more than " << workExperience << " is " << countMaxExp << endl;
	
	delete &employees, &i, p;
	delete &person, &person1, &person2;
	delete &employee, &employee1, &employee2;
	return 0;
}
