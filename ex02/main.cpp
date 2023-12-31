#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	std::cout << "\e[1;96m//////PRESI 1//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign("Jose", 25);
		Bureaucrat exec("POTU", 5);
		PresidentialPardonForm didit("Joxe Mari");
		std::cout << didit << std::endl;
		sign.signAForm(didit);
		std::cout << didit << std::endl;
		didit.execute(exec);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << std::endl;
	std::cout << "\e[1;96m//////PRESI 2//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat sign2("Jose", 26);
		Bureaucrat exec2("POTU", 5);
		PresidentialPardonForm didit2("Joxe Mari");
		std::cout << didit2 << std::endl;
		sign2.signAForm(didit2);
		std::cout << didit2 << std::endl;
		didit2.execute(exec2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << std::endl;
	std::cout << "\e[1;96m//////SHRUBBERY 1//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat arb("Putero", 145);
		Bureaucrat gardener("Bejo", 137);
		ShrubberyCreationForm tree("stest");
		std::cout << tree << std::endl;
		arb.signAForm(tree);
		std::cout <<  tree << std::endl;
		tree.execute(gardener);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////SHRUBBERY 2//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat dude("Random", 146);
		Bureaucrat dude2("Aitana", 138);
		ShrubberyCreationForm thing("stest2");
		std::cout << thing << std::endl;
		dude.signAForm(thing);
		std::cout <<  thing << std::endl;
		thing.execute(dude2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////SHRUBBERY 3//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat dude("Random", 144);
		Bureaucrat dude2("Aitana", 138);
		ShrubberyCreationForm thing("test3");
		std::cout << thing << std::endl;
		dude.signAForm(thing);
		std::cout <<  thing << std::endl;
		thing.execute(dude2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////ROBOT 1//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob("Pussy", 72);
		Bureaucrat psc("Shrink", 45);
		RobotomyRequestForm patient("Anthony Soprano");
		std::cout << patient << std::endl;
		mob.signAForm(patient);
		std::cout <<  patient << std::endl;
		patient.execute(psc);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////ROBOT 2//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob2("Pussy", 72);
		Bureaucrat psc2("Shrink", 46);
		RobotomyRequestForm patient2("Anthony Soprano");
		std::cout << patient2 << std::endl;
		mob2.signAForm(patient2);
		std::cout <<  patient2 << std::endl;
		patient2.execute(psc2);
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////ROBOT 2//////\033[0;0m" << std::endl;
	try{
		std::cout << "\033[0;1m" << std::endl;
		Bureaucrat mob3("Pussy", 73);
		Bureaucrat psc3("Shrink", 46);
		RobotomyRequestForm patient3("Anthony Soprano");
		std::cout << patient3 << std::endl;
		mob3.signAForm(patient3);
		patient3.execute(psc3);
		std::cout <<  patient3 << std::endl;
		std::cout << "\033[0;0m";
		std::cout << "\033[0;1m" << std::endl;
	}
	catch (std::exception &e){
		std::cout << "\e[1;91mERROR: ";
		std::cout << std::endl << e.what() << std::endl << std::endl;
		std::cout << "\033[0;0m";
	}
	std::cout << "\e[1;96m//////////////////////////////////////////\033[0;0m" << std::endl << std::endl;
	{
		Bureaucrat test("Myke", 1);
		ShrubberyCreationForm test2("la declaracion de la renta");
		test.signAForm(test2);
		test.executeAForm(test2);
	}
	return 0;
}