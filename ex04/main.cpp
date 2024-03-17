#include <iostream>
#include <fstream>

#define SUCCESS (0)
#define ERROR (1)
#define ARGUMENTS (4)

void printf_format(const std::string error_message)
{
	std::cerr << error_message << std::endl;
	std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>" << std::endl;
}

bool check_number_argument(int argc)
{
	if (argc != ARGUMENTS)
	{
		printf_format("Error: Incorrect number of arguments\n");
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
		replace_target_string += line.substr(0, start_position) + to;
		line = line.substr(start_position + from.length());
		start_position = line.find(from, start_position);
	}
	replace_target_string += line;
	return (replace_target_string);
}

bool replace_target_string_in_file(const std::string filename, const std::string& from, const std::string& to)
{
	std::ifstream infile(filename);
	if (!infile.is_open())
	{
		printf_format("Error: Faild to open " + filename + " for reading.\n");
		return (false);
	}
	std::ofstream outfile(filename + ".replace");
	if (!outfile.is_open())
	{
		infile.close();
		printf_format("Error: Faild to open " + filename + " for writing.\n");
		return (false);
	}
	std::string line;
	while (getline(infile, line))
		outfile << replace_target_string_in_line(line, from, to) << std::endl;
	infile.close();
	outfile.close();
	return (true);
}

bool test();

int main(int argc, char *argv[])
{
	if (!check_number_argument(argc))
		return (ERROR);
	if (!replace_target_string_in_file(argv[1], argv[2], argv[3]))
		return (ERROR);
	#ifdef DEBUG
		test();
	#endif
	return (SUCCESS);
}
