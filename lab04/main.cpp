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

	Words jew(5);
	string strings[10] = {"apple","bobcat","cork","dog","echo",
        "fox","gorge","hop","icky","jack"};
	
	jew.append(strings[0]);
	jew.append(strings[1]);
	jew.append(strings[2]);
	jew.append(strings[3]);
	jew.append(strings[4]);
	jew.append(strings[5]);
	
	cout<<strings[0]<<" "<<jew[0]<<"<---DID IT FUCKING PRINT APPLE TWICE???"<<endl;

	cout<<"BREKA LINE"<<endl;
	
	for (int i=0; i<10; i++){
    	cout<<jew[i]<<endl;
	}cout<<endl;
	
	return 0;
}
