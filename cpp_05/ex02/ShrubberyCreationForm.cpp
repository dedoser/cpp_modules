/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fignigno <fignigno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 18:07:35 by fignigno          #+#    #+#             */
/*   Updated: 2021/04/28 20:56:52 by fignigno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &name) :
	Form(name, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) :
	Form(obj.getName(), obj.getGradeSign(), obj.getGradeExec())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &right)
{
	this->Form::operator=(right);
	return (*this);
}

void					ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!this->getIsSigned())
		throw Form::IsNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw Form::GradeTooLowException();
	std::ofstream file(executor.getName() + "_shrubbery");
	file <<
"                                              ." << std::endl <<
"                                   .         ;" << std::endl <<
"      .              .              ;%     ;;" << std::endl <<
        ",           ,                :;%  %;" << std::endl <<
"         :         ;                   :;%;'     .," << std::endl <<
",.        %;     %;            ;        %;'    ,;" << std::endl <<
"  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
"   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
"    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
"     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
"      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
"         `:%;.  :;bd%;          %;@%;'" << std::endl <<
"           `@%:.  :;%.         ;@@%;'" << std::endl <<
"             `@%.  `;@%.      ;@@%;" << std::endl <<
"               `@%%. `@%%    ;@@%;" << std::endl <<
"                 ;@%. :@%%  %@@%;" << std::endl <<
"                   %@bd%%%bd%%:;" << std::endl <<
"                     #@%%%%%:;;" << std::endl <<
"                     %@@%%%::;" << std::endl <<
"                     %@@@%(o);  . '" << std::endl <<
"                     %@@@o%;:(.,'" << std::endl <<
"                 `.. %@@@o%::;" << std::endl <<
"                    `)@@@o%::;" << std::endl <<
"                     %@@(o)::;" << std::endl <<
"                    .%@@@@%::;" << std::endl <<
"                    ;%@@@@%::;." << std::endl <<
"                   ;%@@@@%%:;;;." << std::endl <<
"               ...;%@@@@@%%:;;;;,.." << std::endl;
	file.close();
}
