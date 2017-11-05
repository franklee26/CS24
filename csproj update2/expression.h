//expression class
#include <string>
#include "list.h"
using std::string;

class expression{
public:
	//constructors
	expression();
	expression(node* header);
	//methods
	string infixstring();		//returns infix expression provided input head node for list
	string prefixstring();
	string postfixstring();

private:
	node* head;					//head node for tree-list
};