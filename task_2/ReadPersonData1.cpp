#include <iostream>
#include "Functions.h"

using namespace std;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonSalary(double*);

void ReadPersonData(string& name, unsigned short& age, double& salary) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}