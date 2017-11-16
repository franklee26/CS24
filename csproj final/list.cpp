//list implementation
//Frank Lee, 30/10

#include "list.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using std::string;

list::list(){
	head=NULL;
}

list::list(Node* myhead){
	head=myhead;
}

list::list(string atomicexpression){
	int length=atomicexpression.length();
	int i=0;
	Node* current=new Node;
	current->setleftNode(NULL);
	current->setrightNode(NULL);
	while (i<length){
		if (atomicexpression[i]=='('){
			Node* n=new Node;
			n->setparent(current);
			n->setleftNode(NULL);
			n->setrightNode(NULL);
			if (current->left()==NULL){
				current->setleftNode(n);
			} else {
				current->setrightNode(n);
			}
			current=n;
		} else if (atomicexpression[i]=='+' || atomicexpression[i]=='-' || atomicexpression[i]=='*' || atomicexpression[i]=='/'){
			current->setoperator(atomicexpression[i]);
		} else if (atomicexpression[i]=='x'){
			current->setvariable();
		} else if (atomicexpression[i]=='1' || atomicexpression[i]=='2' || atomicexpression[i]=='3' || atomicexpression[i]=='4' || atomicexpression[i]=='5' || atomicexpression[i]=='6' || atomicexpression[i]=='7' || atomicexpression[i]=='8' || atomicexpression[i]=='9'){
			current->setinteger(atoi(&atomicexpression[i])); //do I need to convert this into int using atoi?
		} else if (atomicexpression[i]==')'){							
			current=current->getparent();
			head=current;
		}
		i++;
	}
}


//observers

Node* list::gethead() const{
	return head;
}
