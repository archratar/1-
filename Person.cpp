#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

// constructor
Person::Person(string name, string surname, string middleName, string date, string sex) {
	this->name = name;
	this->surname = surname;
	this->middleName = middleName;
	this->date = date;
	this->sex = sex;
}

// destructor
Person::~Person() {}

// copy operator
Person::Person(const Person &person) {
	this->name = person.name; 
	this->surname = person.surname;
	this->middleName = person.middleName;
	this->date = person.date;
	this->sex = person.sex;
}

// overloaded toString function
string Person::toString() {
	return
	name + " " +
 	surname + " " +
	middleName + " " +
	date + " " +
	sex + " ";
}

/* getters & setters */

string Person::getName(void) {
	return name;
}

void Person::setName(string newName) {
	name = newName;
}

string Person::getSurname(void){
	return surname;
}

void Person::setSurname(string newSurname) {
	surname = newSurname;
}

string Person::getMiddleName(void) {
	return middleName;
}

void Person::setMiddleName(string newMiddleName) {
	middleName = newMiddleName;
}

string Person::getDate(void) {
	return date;
}

void Person::setDate(string newDate) {
	date = newDate;
}

string Person::getSex(void) {
	return sex;
}

void Person::setSex(string newSex) {
	sex = newSex;
}

