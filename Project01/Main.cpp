#include <iostream>
#include "Student.h"

int main() {
	Student st1 = Student("Alex");
	Student st2 = Student("Potter", 14);
	Student st3 = Student("Alice", 15, 10);
	Student st4 = Student();
		
	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;

	return 0;
}