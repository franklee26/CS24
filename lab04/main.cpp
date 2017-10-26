#include <iostream>
#include <string>
#include "words2.h"
using namespace std;
using namespace lab03_2;

int main(){

	string mystring= "dog";

	Words test(2);

	test.append(mystring);

	cout<<test[0]<<endl;

	Words mynewworld(test);

	cout<<mynewworld[0]<<endl;

	string string2="dogg";

	Words test1(2);

	test1.append(string2);
	test1=test;
	cout<<test1[0]<<" "<<test[0]<<endl;

	Words overlord(1);
	overlord.append(mystring);
	overlord.append(string2);

	cout<<overlord[0]<<" "<<overlord[1]<<endl;


	return 0;
}