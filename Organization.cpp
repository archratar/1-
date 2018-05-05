#include <string>
#include "organization.h"

using namespace std;

Organization::Organization(vector<Employee> employees) {
	this->employees = employees;
}

Organization::~Organization() {}

vector<Employee> Organization::getEmployees() {
	return this->employees;
}
