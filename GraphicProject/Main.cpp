#include <iostream>
#include "Editor.h"
#include "Rectangle.h"
#include "Circle.h"

using namespace std;

int main() {
	int n = 6;

	Figure* rect = new Rectangle(4, 5, 1, 1);
	Figure* circle = new Circle(5, 3, 4);

	Editor editor;

	cout << typeid(rect).name() << endl;
	cout << typeid(circle).name() << endl;

	cout << typeid(*rect).name() << endl;
	cout << typeid(*circle).name() << endl;

	cout << strcmp(typeid(*rect).name(), "class Rectangle") << endl;
	cout << strcmp(typeid(*circle).name(), "class Circle") << endl;

	return 0;
}

