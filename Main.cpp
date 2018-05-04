#include <iostream>
#include <string>
#include "employee.h"

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
	int workExperience = 10; 

	Person person(name, surname, middleName, date, sex);
	Employee employee(organization, profession, diplomaIn, position, salary, workExperience, person);
	cout << employee << endl;
	cin >> employee;
	cout << employee;
	return 0;
}
