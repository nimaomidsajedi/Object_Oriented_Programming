/*
 * oop_polymorphism.cpp
 *
 *  Created on: Jan 19, 2021
 *      Author: Nima Omidsajedi
 */

#include <iostream>
#include <string>
using namespace std;

class test_class {
public:
	void test_info() {
		cout << "No input parameters!" << endl;
		cout << "----------------" << endl;
	}
	void test_info(int x) {
		cout << "Int input parameter: " << x << endl;
		cout << "----------------" << endl;
	}
	void test_info(int x, int y) {
		cout << "First Int input parameter: " << x << endl;
		cout << "Second Int input parameter: " << y << endl;
		cout << "----------------" << endl;
	}
	void test_info(string x) {
		cout << "Str input parameter: " << x << endl;
		cout << "----------------" << endl;
	}

};
int main() {

	test_class my_test_obj;
	my_test_obj.test_info();
	my_test_obj.test_info(10);
	my_test_obj.test_info(15, 20);
	my_test_obj.test_info("This is my overloading function!");

	return 0;


}






