#include <iostream>
#include "Operators.h"

using namespace std;

int main() {
	Integer int1{ 3 }, int2{ 5 };

	//Integer int3 = int1.sum(int2);

	Integer int3 = int1 + int2;
		
	int3 = -int1;

	cout << int3.getValue() << endl;

	return 0;
}