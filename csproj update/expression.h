//expression class
#include <string>
#include "list.h"
using std::string;

class expression{
public:
	//methods
	string infixstring(node* head);		//returns infix expression provided input head node for list
	string prefixstring(node *head);
};