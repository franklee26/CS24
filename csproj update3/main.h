//main.h framework
//Frank Lee 5/11

#include "node.h"
#include "list.h"
#include "expression.h"
#include <iostream>
#include <string>

//function templates for main.cpp

void userprompt(string expr){
	list l(expr);
	expression e(l.gethead());
	std::cout<<"The infix expression: "<<e.infixstring()<<std::endl;
	std::cout<<"The prefix expression: "<<e.prefixstring()<<std::endl;
	std::cout<<"The postfix expression: "<<e.postfixstring()<<std::endl;
}	