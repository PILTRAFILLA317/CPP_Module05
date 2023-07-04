#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy), _target(copy._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return (*this);
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

bool		PresidentialPardonForm::getSigned() const
{
	return (this->getSign());
}

const char *PresidentialPardonForm::FileOpenException::what() const throw()
{
	return ("File open error");
}

const char *PresidentialPardonForm::NotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw PresidentialPardonForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
