#include <string>

using namespace std;

class Person {
	public:
		Person(string name, string surname, string middleName, string date, string sex);
		~Person();
		Person(const Person &person);
		string toString();
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
	private:
		string name;
		string surname;
		string middleName;
		string date;
		string sex;
};
