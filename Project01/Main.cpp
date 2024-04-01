#include <iostream>
#include "Student.h"

int main() {
	//const int size = 10;
	//int vector[size]{};

	//for (int i = 0; i < size; i++)
	//{
	//	cout << vector[i] << " ";
	//}

	/*Student st1 = Student("Alex");
		Student st2 = Student("Potter", 14);
	Student st3 = Student("Alice", 15, 10);
	Student st4 = Student(); */

	Student st1{};
	Student st2{ "Alex" };
	Student st3{ "Alex", 14 };
	Student st4{ "Alex", 14, 10 };

	cout << st1.convert() << endl;
	cout << st2.convert() << endl;
	cout << st3.convert() << endl;
	cout << st4.convert() << endl;

	return 0;
}