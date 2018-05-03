#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main(int argc, char** argv) {
	string name = "Vasya";
	string surname = "Pupkin";
	string middleName = "Olegovich";
	string date = "23.04.11";
	string sex = "male";

	Person person(name, surname, middleName, date, sex);
	Person person1 = person;

	cout << person.toString() << endl;
	cout << person1.toString() << endl;
	return 0;
}
