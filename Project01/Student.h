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

	//Student(string nm) {
	//	//cout << "constructor with arguments was calling" << endl;
	//	name = nm;
	//}

	//Student(string nm, int a) {
	//	//cout << "constructor with arguments was calling" << endl;
	//	name = nm;
	//	age = a;
	//}

	// canonical constructor (канонический конструктор)
	Student(string nm, int a = 14, double m = 4) {
		//cout << "canonical constructor with arguments was calling" << endl;
		name = nm;
		age = a;
		mark = m;
	}

	//// copy-constructor (конструктор копирования)
	//Student(const Student& student) {

	//}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}
};
