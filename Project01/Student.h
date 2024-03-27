#pragma once
#include <string>
using namespace std;

class Student {
public:
	string name;
	int age;
	double mark;

	// default constructor (конструктор по умолчанию)
	Student() {
		cout << "default constructor was calling" << endl;
		name = "no name";
		age = 6;
		mark = 4;
	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}
};
