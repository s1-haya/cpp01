#include <iostream>

void test_1()
{
	std::cout << "test_1" << std::endl;
	std::cout << "\x1B[32mOK\033[0m\t\t" << std::endl;
	std::cout << "\x1B[31mKO\033[0m\t\t" << std::endl;
}

void test()
{
	test_1();
}
