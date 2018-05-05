#include <string>
#include <vector>
#include "employee.h"

using namespace std;

class Organization {
	// constructor, destructor
	public:
		Organization(vector<Employee> employees);
		~Organization();
	public:
		vector<Employee> getEmployees();
	private:
		vector<Employee> employees;
};
