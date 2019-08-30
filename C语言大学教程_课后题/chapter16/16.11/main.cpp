#include <iostream>
#include "Sort.h"

int main()
{
	Int test(10);

	std::cout << test.getSize() << std::endl;
	test.getData();
	//test.bubbleSort();
	test.setData();
	test.getData();
	return 0;
}