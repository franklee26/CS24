#include "node.h"
#include "list.h"
#include "expression.h"
#include <iostream>
#include <string>

int main(){

	string work="(((x+3)+((x*2)/(x-3)))*((x+7)-((x+2)*(x/2))))";

	string easy="((x+2)-(x*3))";


	list l(work);
	list g(easy);
	expression e(l.gethead());
	expression f(g.gethead());

	std::cout<<e.infixstring()<<std::endl;
	std::cout<<e.infixstring()<<std::endl;
	std::cout<<e.prefixstring()<<std::endl;
	std::cout<<e.postfixstring()<<std::endl;
	std::cout<<f.postfixstring()<<std::endl;
	return 0;
}