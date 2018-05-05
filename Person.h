#include <string>

using namespace std;

class Person {
	// constructor, destructor, copy operator
	public:
		Person();
		Person(string name, string surname, string middleName, string date, string sex);
		~Person();
		Person(const Person &person);
	// (), =, <<, >>
	public:		
		operator() (string name, string surname, string middleName, string date, string sex);
		operator= (const Person &person);
		friend std::ostream& operator<< (std::ostream &out, const Person &person);
		friend std::istream& operator>> (std::istream &in, Person &person);
	public:
	// virtal method for showing late binding
		virtual void info(void);
	// getters & setters
	public:
		string getName(void);
		void setName(string newName);
		string getSurname(void);
		void setSurname(string newSurname);
		string getMiddleName(void);
		void setMiddleName(string newMiddleName);
		string getDate(void);
		void setDate(string newDate);
		string getSex(void);
		void setSex(string newSex);
	// data fields	
	private:
		string name;
		string surname;
		string middleName;
		string date;
		string sex;
};
