﻿#pragma once
#include <string>
using namespace std;

class Student {
private:
	string name;
	int age;
	double mark;

public:	

	// default constructor (конструктор по умолчанию)
	Student() {
		//cout << "default constructor was calling" << endl;
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

	// destructor
	~Student() {
		//cout << "destructor was calling" << endl;
		// ...
	}

	string getName() {
		return name;
	}

	/*void setName(string nm) {
		name = nm;
	}*/

	int getAge() {
		return age;
	}

	void setAge(int a) {
		if (a > 0 && a < 100) {
			age = a;
		}
	}

	double getMark() {
		return mark;
	}

	void setMark(double m) {
		if (m >= 0 && m <= 10) {
			mark = m;
		}
	}

	string convert() {
		string s = "";
		s += name;
		s += ": age = " + to_string(age);
		s += ", mark = " + to_string(mark);

		return s;
	}
};
