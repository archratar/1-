#include <string>
#include "person.h"

using namespace std;

class Employee: public Person {
	friend class Person;
	// constructor, destructor, copy operator
	public:
//		Employee(string organization, string profession, string diplomaIn, string position, int salary, int workExperience, 
//				   string name, string surname, string middleName, string date, string sex);
		Employee(string organization, string profession, string diplomaIn, string position, int salary, int workExperience, const Person &person);
		~Employee();
		Employee(const Employee &employee, const Person &person);
	// (), =, <<, >>
	public:
		operator() (string organization, 
				 	string profession, 
				 	string diplomaIn, 
					string position, 
					int salary, 
					int workExperience);
		operator= (const Employee &employee);
		friend std::ostream& operator<< (std::ostream &out, const Employee &employee);
		friend std::istream& operator>> (std::istream &in, Employee &employee);
	public:
		void info(void);
	// getters & setters
	public:
		void setOrganization(string organization);
		string getOrganization();
		void setProfession(string profession);
		string getProfession();
		void setDiplomaIn(string diplomaIn);
		string getDiplomaIn();
		void setPosition(string position);
		string getPosition();
		void setSalary(int salary);
		int getSalary();
		void setWorkExperience(int workExperience);
		int getWorkExperience();
	// data fields
	private:
		string organization;
		string profession;
		string diplomaIn;
		string position;
		int salary;
		int workExperience;
};
