#include <iostream>
#include <string>
using namespace std;

class super_class {
public:
	int salary;
};

class employee_class: public super_class {
public:
	string working_hours;
};

class manager_class: public super_class {
public:
	int bonus;
};

int main() {
	employee_class emp_1;
	manager_class mng_1;

	emp_1.salary = 5000;
	emp_1.working_hours = "8 hours";

	mng_1.salary = 10000;
	mng_1.bonus = 2000;

	cout << "Employee salary:" << emp_1.salary << " Working hours: " << emp_1.working_hours << endl;
	cout << "Manager salary:" << mng_1.salary << " Working bonus: " << mng_1.bonus << endl;

	return 0;


}

