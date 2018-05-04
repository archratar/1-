#include <string>
#include "employee.h"

using namespace std;

class Organization {
	public:
		Organization(Employee employees[]);
		~Organization();
		Employee* getEmployees();
	private:
		Employee employees[];
};
