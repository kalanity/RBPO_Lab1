#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

extern unsigned short height;
extern double salary;

unsigned short ReadPersonAge();
string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short&);
void ReadPersonSalary(double*);
void ReadPersonData(string&, unsigned short&, double&);
void ReadPersonData(string&, unsigned short&, unsigned short&, unsigned short&);
void WritePersonData(string&, string&, string&, const unsigned short*);

int main() {
	string name;
	unsigned short age;
	unsigned short weight;

	ReadPersonData(name, age, height, weight);
	ReadPersonData(name, age, salary);
	WritePersonData(&age, name, to_string(weight), to_string(height));
	return 0;
}
