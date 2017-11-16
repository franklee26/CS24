//string function for CS24 proj
//Frank Lee 5/11

#include "node.h"
#include "list.h"
#include "expression.h"
#include "string.h"			//provides userprompt()
#include <iostream>
#include <string>

int main(){
	string expr;
	std::cout<<"Please enter your atomic expression or enter 'q' to quit: ";
	std::cin>>expr;
	if (expr=="q"){
		std::cout<<"Exiting..."<<std::endl;
		return 0;
	} else{
		std::cout<<std::endl;
		userprompt(expr);
		main();
	}
	return 0;
}