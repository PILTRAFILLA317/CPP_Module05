#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try
	{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		Form f1("f1", 1, 1);
		Form f2("f2", 150, 150);
		std::cout << b1 << std::endl;
		std::cout << b2 << std::endl;
		std::cout << f1 << std::endl;
		std::cout << f2 << std::endl;
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}