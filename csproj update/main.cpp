#include "node.h"
#include "list.h"
#include "expression.h"
#include <iostream>
#include <string>

int main(){

	string work="(((x+3)+((x*2)/(x-3)))*((x+7)-((x+2)*(x/2))))";

	string easy="((x/2)+((x-3)*(x+4)))";

	list l(work);
	list g(easy);
	list f(easy);
	
	node* head=l.gethead();
	head=head->getnextleft(head);
	std::cout<<head->getoperator()<<std::endl;

	head=head->getparent();

	std::cout<<head->getoperator()<<std::endl;
	
	expression x;
	std::cout<<x.infixstring(l.gethead());
	expression y;
	std::cout<<y.infixstring(g.gethead());
	std::cout<<g.gethead()->left()->getoperator();
	/*
	std::cout<<"BREAK"<<std::endl;
	std::cout<<y.prefixstring(f.gethead());

	
	string z;
	std::cout<<"Please enter atomic epression: ";
	std::cin>>z;

	list h(z);
	expression k;
	std::cout<<k.infixstring(h.gethead());
	*/
	return 0;
}