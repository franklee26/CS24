#include <iostream>
#include <time.h>
#include "functions.h"

using namespace std;

void sayHello ()
{
  cout << "Hellooo!" << endl;
}

void printDate()
{
  time_t rawtime;
  time ( &rawtime );
  cout << "The current local time is "
       << ctime (&rawtime) << endl;
}
