//CS24 Proj 1; Frank Lee 27/10
#ifndef NODE_H
#define NODE_H
#include <string>
using std::string;

class node{

public:
	//constructor: do we need one? Apparently yes. 

	node();										//defaults to integer=0 (out of range)

	//methods

	void setoperator(char op);
	void setleftnode(node* leftpointer);
	void setrightnode(node* rightpointer);
	void setvariable();							//sets variable to x by default
	void setparent(node* theparent);
	void setinteger(int myvalue);

	//oberservers

	node* left() const;			//recover the left pointer
	node* right() const;		//recover the right pointer
	int value() const;			//recover the integer
	node* getparent() const;	//recover parent node
	char getoperator() const;

	node* getnextleft(node* currnode) const; //move to the next linked node (if there is one) for the left
	node* getnextright(node* currnode) const;

	bool leftexist();
	bool rightexist();
	
private:
	char myoperator;
	node* leftnode;
	node* rightnode;
	string variable;
	int integer;				//should be [1-9]
	node* parent;
};
#endif