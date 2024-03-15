#include <iostream>

#define SUCCESS (0)
#define ERROR (1)

void printf_correct_format()
{
	std::cerr << "Please use the following format when running the program:" << std::endl;
	std::cerr << "./sed_is_for_losers <filename> <pre-change string> <post-change string>\n" << std::endl;
	std::cerr << "Where:" << std::endl;
	std::cerr << "- <filename> is the name of the file you want to modify.\n" << std::endl;
	std::cerr << "- <pre-change string> is the string in the file that you want to replace.\n" << std::endl;
	std::cerr << "- <post-change string> is the string that will replace the pre-change string.\n" << std::endl;
	std::cerr << "Example: ./sed_is_for_losers example.txt hello world" << std::endl;
}

bool check_init(int argc, char *argv[])
{
	(void)argv;
	if (argc != 3)
	{
		std::cerr << "Error: Incorrect number of arguments\n" << std::endl;
		printf_correct_format();
		return (false);
	}
	return (true);
}

int main(int argc, char *argv[])
{
	if (!check_init(argc, argv))
		return (ERROR);
	std::cout << argv[0] << std::endl;
	return (SUCCESS);
}
