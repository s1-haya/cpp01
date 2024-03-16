#include <iostream>
#include <fstream>

#define SUCCESS (0)
#define ERROR (1)

void printf_correct_format(const std::string error_message)
{
	std::cerr << error_message << std::endl;
	std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
}

bool check_init(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf_correct_format("Error: Incorrect number of arguments\n");
		return (false);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		printf_correct_format("Error: Incorrect arguments. Please enter a string\n");
		return (false);
	}
	return (true);
}

std::string replace_target_string_in_line(std::string line, const std::string& from, const std::string& to)
{
	size_t start_position = line.find(from, 0);
	std::string replace_target_string;
	while (start_position != std::string::npos)
	{
		std::cout << line << std::endl;
		replace_target_string += line.substr(0, start_position) + to;
		line = line.substr(start_position + from.length());
		start_position = line.find(from, start_position);
	}
	replace_target_string += line;
	return (replace_target_string);
}

void replace_target_string_in_file(const std::string filename, const std::string& from, const std::string& to, bool *result)
{
	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		*result = false;
		printf_correct_format("Error: Faild to open " + filename + " for reading.\n");
		return ;
	}
	std::ofstream outfile(filename + ".replace");
	if (!*result)
	{
		infile.close();
		*result = false;
		printf_correct_format("Error: Faild to open " + filename + " for writing.\n");
		return ;
	}
	std::string line;
	while (getline(infile, line))
		outfile << replace_target_string_in_line(line, from, to) << std::endl;
	infile.close();
	outfile.close();
}

int main(int argc, char *argv[])
{
	bool	result;

	result = true;
	if (!check_init(argc, argv))
		return (ERROR);
	replace_target_string_in_file(argv[1], argv[2], argv[3], &result);
	if (!result)
		return (ERROR);
	return (SUCCESS);
}
