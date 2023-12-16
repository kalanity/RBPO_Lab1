#pragma once
#include <iostream>

using namespace std;

void WritePersonData(const unsigned short* age,const string& name,const string& weight,const string& height){
    cout << "Name: " << name << "\nWeight: " << weight << "\nHeight: " << height << endl;
    cout << "Age: " << *age << "\nSalary: " << to_string(salary);
}
