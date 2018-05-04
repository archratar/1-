#include <string>
#include "organization.h"

using namespace std;

Organization::Organization(Employee employees[]) {}

Employee* Organization::getEmployees() {
	return this->employees;
}

Organization::~Organization() {}
