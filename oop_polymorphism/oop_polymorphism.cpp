/*
 * oop_polymorphism.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
#include <string>
using namespace std;

class super_class {
public:
	int salary;
	void salary_info() {
		cout << "Salary: " << salary << endl;
	}
};

class employee_class: public super_class {
public:
	string working_hours;
	void info() {
		cout << "The employee information" << endl;
		cout << "Working hours: " << working_hours << endl;
	}
};

class manager_class: public super_class {
public:
	int bonus;
	void info() {
		cout << "The manager information" << endl;
		cout << "Working bonus: " << bonus << endl;
	}
};

int main() {
	employee_class emp_1;
	manager_class mng_1;

	emp_1.salary = 5000;
	emp_1.working_hours = "8 hours";

	mng_1.salary = 10000;
	mng_1.bonus = 2000;

	emp_1.info();
	emp_1.salary_info();

	cout << "-------------------" << endl;

	mng_1.info();
	mng_1.salary_info();

	return 0;


}






