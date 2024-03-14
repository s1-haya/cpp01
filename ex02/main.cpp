#include <iostream>

#define SUCCESS 0
#define FAILURE 1

void step1_initialization()
{
	std::cout << "STEP 1: INITIALIZATION" << std::endl;
	std::string string = "HI THIS IS BRAIN";
	// Declare and initialize at the same time
	std::string &stringREF = string;
	std::string *stringPTR = &string;

	// Declare and initialize separately
	// std::string &stringREF;
	// stringREF = string;
	// std::string &stringREF;
	// stringREF = string;

	std::cout << "value : " << string << std::endl;
	std::cout << "ptr   : " << stringPTR << std::endl;
	std::cout << "ref   : " << stringREF << std::endl;
}

void step2_reassignment()
{
	std::cout << "STEP 2: REASSIGNEMNT" << std::endl;
	std::string string = "HI THIS IS BRAIN";
	std::string tmp = "TMP";

	std::string *stringPTR = &string;
	std::cout << "ptr         : " << *stringPTR << std::endl;
	std::cout << "ptr_of_ptr  : " << &stringPTR << std::endl;
	stringPTR = &tmp;
	std::cout << "ptr         : " << *stringPTR << std::endl;
	std::cout << "ptr_of_ptr  : " << &stringPTR << std::endl;

	std::cout << std::endl;

	std::string &stringREF = string;
	std::cout << "ref             : " << stringREF << std::endl;
	std::cout << "ptr_of_ref      : " << &stringREF << std::endl;
	// std::string &stringREF = tmp;
	// &stringREF = tmp;
	// std::cout << "ref  : " << stringREF << std::endl;
	// std::string &&stringREF_of_REF = stringREF;


	std::string &stringREF_tmp = stringREF;
	string = "PLEASE CHANGE THIS BRAIN";
	std::cout << "ref_tmp         : " << stringREF_tmp << std::endl;
	std::cout << "ptr_of_ref_tmp  : " << &stringREF_tmp << std::endl;
}

void step3_memory_adress()
{
	std::cout << "STEP 3: MEMORY_ADRESS" << std::endl;
	std::string string = "HI THIS IS BRAIN";
	std::cout << "value        : " << &string << std::endl;

	std::string *stringPTR = &string;
	std::cout << "ptr          : " << stringPTR << std::endl;
	std::cout << "ptr_of_ptr   : " << &stringPTR << std::endl;

	std::string &stringREF = string;
	std::cout << "ref          : " << &stringREF << std::endl;
}

void step4_null_value()
{
	std::cout << "STEP 4: NULL_VALUE" << std::endl;
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "value        : " << string << std::endl;
	std::cout << "ptr          : " << *stringPTR << std::endl;
	std::cout << "ref          : " << stringREF << std::endl;

	string = "PLEASE CHANE THIS BRAIN!";

	std::cout << "value        : " << string << std::endl;
	std::cout << "ptr          : " << *stringPTR << std::endl;
	std::cout << "ref          : " << stringREF << std::endl;

	stringPTR = NULL;
	if (stringPTR == NULL)
		std::cout << "ptr is null" << std::endl;
	// error: use of overloaded operator '=' is ambiguous (with operand types 'std::string' (aka 'basic_string<char>') and 'long')
	// stringREF = NULL;
	// if (stringREF == NULL)
	// 	std::cout << "ref is null" << std::endl;
}

int main(void) {
	step1_initialization();
	std::cout << std::endl;
	step2_reassignment();
	std::cout << std::endl;
	step3_memory_adress();
	std::cout << std::endl;
	step4_null_value();
	return (SUCCESS);
}
