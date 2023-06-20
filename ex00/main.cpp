#include "Bureaucrat.hpp"

int main(void)
{
	{
		Bureaucrat bob("Bob", 1);
		std::cout << bob << std::endl;
		try
		{
			bob.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Bureaucrat jim("Jim", 150);
		std::cout << jim << std::endl;
		try
		{
			jim.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat jim("Jim", 151);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat jim("Jim", 0);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		Bureaucrat jim("Jim", 150);
		std::cout << jim << std::endl;
		try
		{
			jim.incrementGrade();
			std::cout << jim << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}