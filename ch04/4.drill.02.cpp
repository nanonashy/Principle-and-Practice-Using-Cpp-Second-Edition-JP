﻿#include "std_lib_facilities.h"

int main()
{
	int val1{ 0 };
	int val2{ 0 };

	while (cin >> val1 >> val2) {
		if (val1 < val2)
			cout << "the smaller value is: " << val1 << endl << "the larger value is: " << val2 << endl;
		else
			cout << "the smaller value is: " << val2 << endl << "the larger value is: " << val1 << endl;
	}

	return 0;
}