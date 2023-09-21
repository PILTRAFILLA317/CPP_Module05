// #include "Bureaucrat.hpp"
// #include "Form.hpp"

// int main(){
// 	try
// 	{
// 		Bureaucrat b1("b1", 1);
// 		Bureaucrat b2("b2", 150);
// 		Form f1("f1", 1, 1);
// 		Form f2("f2", 150, 150);
// 		Form f3("f3", 1, 1);
// 		std::cout << b1 << std::endl;
// 		std::cout << b2 << std::endl;
// 		std::cout << f1 << std::endl;
// 		std::cout << f2 << std::endl;
// 		f1.beSigned(b1);
// 		std::cout << f1 << std::endl;
// 		b2.signForm(f2);
// 		std::cout << f2 << std::endl;
// 		b2.signForm(f3);
// 		std::cout << f3 << std::endl;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	return 0;
// }

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){
	try{
		Bureaucrat test("Ion Mikel Romero", 69);
		Bureaucrat Armani("Chico Blanco", 150);
		Bureaucrat Fekka("Tango", 50);
		Bureaucrat Mishagi("Kobe Briant", 1);
		Bureaucrat Party("Zoom Zoom", 107);
		Form Trabajo("Sexador de Pollos", 69, 69);
		Form Trabajo1("Pelele", 150, 150);
		Form Trabajo2("Manporrero", 50, 50);
		Form Trabajo3("Rockstar", 1, 1);
		Form Trabajo4("Expert on HTML", 107, 107);
		std::cout << Trabajo << std::endl;
		std::cout << Trabajo1 << std::endl;
		std::cout << Trabajo2 << std::endl;
		std::cout << Trabajo3 << std::endl;
		std::cout << Trabajo4 << std::endl;
		test.signForm(Trabajo);
		std::cout << Trabajo << std::endl;
		Armani.signForm(Trabajo1);
		std::cout << Trabajo1 << std::endl;
		Fekka.signForm(Trabajo2);
		std::cout << Trabajo2 << std::endl;
		Mishagi.signForm(Trabajo3);
		std::cout << Trabajo3 << std::endl;
		Party.signForm(Trabajo4);
		std::cout << Trabajo4 << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------BY THIS POINT NO EXCEPTION MUST HAVE BEEN THROWN----------- \033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error("Unai Martin Marante Gracia Gutierrez Primero", 420);
		Form noterror("DJ Sonora", 70, 70);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS BUREAUCRAT SHOUDL DISPLAY A GRADE TO LOW ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error1("URDULIZ", 0);
		Form	inutil("Estudiante de ADE", 33, 33);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS FORM SHOUDL DISPLAY A GRADE TO HIGH ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error3("URDULIZ", 1);
		Form	inutil("Estudiante de ADE", 0, 0);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;91m-----------THIS FORM SHOUDL DISPLAY A GRADE TO LOW ERROR-----------\033[0;0m" << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat error4("Unqualified for the Job", 144);
		Form	anexo("Anexo Territorial", 60, 60);
		error4.signForm(anexo);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	return 0;
}