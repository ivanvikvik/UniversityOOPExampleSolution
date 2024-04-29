#include "Worker.h"

double Worker::getSalary() {
	return this->salary;
}

void Worker::setSalary(double salary) {
	if (salary > 0) {
		this->salary = salary;
	}
}

string Worker::getInfo() {
	string s = "";
	s += getName() + ": age = ";
	s += to_string(getAge());
	s += ", salary = ";
	s += to_string(salary);

	return s;
}