#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	Intern	intern;
	AForm	*robo_form;
	AForm	*shrub_form;
	AForm	*president_form;
	AForm	*president_form2;
	AForm	*unknown_form;

	std::cout << "INTERN TESTS:" << std::endl;

	robo_form = intern.makeForm("robotomy request", "robo");
	std::cout << *robo_form << " was just created " << std::endl << std::endl;

	president_form = intern.makeForm("presidential pardon", "president");
	std::cout << *president_form << " was just created " << std::endl << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign("Jose", 25);
		Bureaucrat exec("POTUS", 5);
		std::cout << *president_form << std::endl;
		sign.signAForm(*president_form);
		std::cout << *president_form << std::endl;
		president_form->execute(exec);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	president_form2 = intern.makeForm("presidential pardon", "president");
	std::cout << *president_form2 << " was just created " << std::endl << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign2("Jose", 26);
		Bureaucrat exec2("POTU", 5);
		std::cout << *president_form2 << std::endl;
		sign2.signAForm(*president_form2);
		std::cout << *president_form2 << std::endl;
		president_form2->execute(exec2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	shrub_form = intern.makeForm("shrubbery creation", "shrub");
	std::cout << *shrub_form << " was just created " << std::endl << std::endl;

	try
	{
		unknown_form = intern.makeForm("driving licence", "drive");
		std::cout << *unknown_form << " was just created " << std::endl << std::endl;
	}
	catch (Intern::InvalidFormException &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	// delete robo_form;
	// delete shrub_form;
	// delete president_form;
	// delete unknown_form;
	return 0;
}