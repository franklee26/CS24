#include "node.h"
#include "list.h"
#include "expression.h"
#include <iostream>
#include <string>

int main(){

	string work="(((x+3)+((x*2)/(x-3)))*((x+7)-((x+2)*(x/2))))";

	string easy="((x-9)/((x+3)*(x-7)))";

	list l(work);
	list g(easy);
	
	node* head=l.gethead();
	head=head->getnextleft(head);
	std::cout<<head->getoperator()<<std::endl;

	head=head->getparent();

	std::cout<<head->getoperator()<<std::endl;
	
	expression x;
	std::cout<<x.infixstring(l.gethead());
	expression y;
	std::cout<<y.infixstring(g.gethead());

	return 0;
}