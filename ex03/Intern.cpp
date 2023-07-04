#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &copy)
{
	(void)copy;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

// AForm *Intern::makeForm(std::string name, std::string target)
// {
// 	AForm *form;

// 	if (name == "robotomy request")
// 		form = new RobotomyRequestForm(target);
// 	else if (name == "shrubbery creation")
// 		form = new ShrubberyCreationForm(target);
// 	else if (name == "presidential pardon")
// 		form = new PresidentialPardonForm(target);
// 	else
// 		throw Intern::InvalidFormException();
// 	std::cout << "Intern creates " << form->getName() << std::endl;
// 	return (form);
// }

typedef AForm* (*FormCreationFunction)(std::string);

std::map<std::string, FormCreationFunction> formCreationMap;

AForm* CreateRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm* CreateShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* CreatePresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

void InitializeFormCreationMap()
{
	formCreationMap["robotomy request"] = &CreateRobotomyRequestForm;
	formCreationMap["shrubbery creation"] = &CreateShrubberyCreationForm;
	formCreationMap["presidential pardon"] = &CreatePresidentialPardonForm;
}

AForm* Intern::makeForm(std::string name, std::string target) const
{
	InitializeFormCreationMap();
	std::map<std::string, FormCreationFunction>::iterator it = formCreationMap.find(name);
	if (it != formCreationMap.end())
	{
		AForm* form = it->second(target);
		std::cout << "Intern creates " << form->getName() << std::endl;
		return form;
	}
	else
	{
		throw Intern::InvalidFormException();
	}
}

const char *Intern::InvalidFormException::what() const throw()
{
	return ("Invalid form name");
}