#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy), _target(copy._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return (*this);
	AForm::operator=(copy);
	this->_target = copy._target;
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

bool	RobotomyRequestForm::getSigned() const
{
	return (this->getSign());
}

const char *RobotomyRequestForm::FileOpenException::what() const throw()
{
	return ("File open error");
}

const char *RobotomyRequestForm::NotSignedException::what() const throw()
{
	return ("Form is not signed");
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSign())
		throw RobotomyRequestForm::NotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << "BBDBDBDB2DBBBBBBBBBABBABXBZBABZABZABBAZ" << std::endl;
	int i = rand();
	if (i % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " failed being robotomized" << std::endl;

}