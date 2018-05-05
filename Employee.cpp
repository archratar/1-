#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

Employee::Employee() {}

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
	cout << "enter organization" << endl;
	in >> employee.organization;
	cout << "enter profession" << endl;
	in >> employee.profession;
	cout << "enter diploma" << endl;
	in >> employee.diplomaIn;
	cout << "enter position" << endl;
	in >> employee.position;
	cout << "enter salary number" << endl;
	in >> employee.salary;
	cout << "enter work experience in years" << endl;
	in >> employee.workExperience;
	return in;
}

void Employee::bind(Person &person) {
	this->setName(person.getName());
	this->setSurname(person.getSurname());
	this->setMiddleName(person.getMiddleName());
	this->setDate(person.getDate());
	this->setSex(person.getSex());
}

void Employee::info(void) {
	cout << this->organization << endl;
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
