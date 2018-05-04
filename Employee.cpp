#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

//Employee::Employee(string organization, 
//				   string profession, 
//				   string diplomaIn, 
//				   string position, 
//				   int salary, 
//				   int workExperience, 
//				   string name, 
//				   string surname, 
//				   string middleName, 
//				   string date, 
//				   string sex)
//		: Person(name, surname, middleName, date, sex) {
//	this->organization = organization;
//	this->profession = profession;
//	this->diplomaIn = diplomaIn;
//	this->position = position;
//	this->salary = salary;
//	this->workExperience = workExperience;
//}

Employee::Employee(string organization, 
				   string profession, 
				   string diplomaIn, 
				   string position, 
				   int salary, 
				   int workExperience, 
				   const Person &person)
		: Person(person) {
	this->organization = organization;
	this->profession = profession;
	this->diplomaIn = diplomaIn;
	this->position = position;
	this->salary = salary;
	this->workExperience = workExperience;
}

Employee::Employee(const Employee &employee, const Person &person) : Person(person) {
	this->organization = employee.organization;
	this->profession = employee.profession;
	this->diplomaIn = employee.diplomaIn;
	this->position = employee.position;
	this->salary = employee.salary;
	this->workExperience = employee.workExperience;
}

Employee::~Employee() {};

Employee::operator() (string organization, 
					  string profession, 
					  string diplomaIn, 
					  string position, 
					  int salary, 
					  int workExperience) {
	this->organization = organization;
	this->profession = profession;
	this->diplomaIn = diplomaIn;
	this->position = position;
	this->salary = salary;
	this->workExperience = workExperience;
}

Employee::operator= (const Employee &employee) {
	this->organization = employee.organization;
	this->profession = employee.profession;
	this->diplomaIn = employee.diplomaIn;
	this->position = employee.position;
	this->salary = employee.salary;
	this->workExperience = employee.workExperience;
}

std::ostream& operator<< (std::ostream &out, const Employee &employee) {
	out << "Employee(" << employee.organization << ", "
					   << employee.profession << ", "
					   << employee.diplomaIn << ", "
					   << employee.position << ", "
					   << employee.salary << ", "
					   << employee.workExperience << ")";
	return out;
}

std::istream& operator>> (std::istream &in, Employee &employee) {
	in >> employee.organization;
	in >> employee.profession;
	in >> employee.diplomaIn;
	in >> employee.position;
	in >> employee.salary;
	in >> employee.workExperience;
	return in;
}

void Employee::info(void) {
	cout << this->organization;
}

void Employee::setOrganization(string organization) {
	this->organization = organization;
}
string Employee::getOrganization() {
	return this->organization;
}
void Employee::setProfession(string profession) {
	this->profession = profession;
}
string Employee::getProfession() {
	return this->profession;
}
void Employee::setDiplomaIn(string diplomaIn) {
	this->diplomaIn = diplomaIn;
}
string Employee::getDiplomaIn() {
	return this->diplomaIn;
}
void Employee::setPosition(string position) {
	this->position = position;
}
string Employee::getPosition() {
	return this->position;
}
void Employee::setSalary(int salary) {
	this->salary = salary;
}
int Employee::getSalary() {
	return this->salary;
}
void Employee::setWorkExperience(int workExperience) {
	this->workExperience = workExperience;
}
int Employee::getWorkExperience() {
	return this->workExperience;
}
