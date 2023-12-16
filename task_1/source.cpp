#include <iostream>
#include <string>
using namespace std;

unsigned short height;
double salary;

unsigned short ReadPersonAge() {
    unsigned short age;
    cout << "Enter person age: ";
    cin >> age;
    return age;
}

string ReadPersonName() {
    string name;
    cout << "Enter person name: ";
    cin >> name;
    return name;
}

void ReadPersonHeight() {
    cout << "Enter person height: ";
    cin >> height;
}

void ReadPersonWeight(unsigned short& weight) {
    cout << "Enter person weight: ";
    cin >> weight;
}

void ReadPersonSalary(double* salary) {
    cout << "Enter salary: ";
    cin >> *salary;
}

void ReadPersonData(string& name, unsigned short& age, double& salary) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonSalary(&salary);
}

void ReadPersonData(string& name, unsigned short& age, unsigned short& height, unsigned short& weight) {
    name = ReadPersonName();
    age = ReadPersonAge();
    ReadPersonWeight(weight);
    ReadPersonHeight();
}

void WritePersonData(const unsigned short* age, const string& name, const string& weight, const string& height) {
    cout << "Name: " << name << "\nWeight: " << weight << "\nHeight: " << height << endl;
    cout << "Age: " << *age << "\nSalary: " << to_string(salary);
}

int main() {
    string name;
    unsigned short age;
    unsigned short weight;

    ReadPersonData(name, age, height, weight);
    ReadPersonData(name, age, salary);
    WritePersonData(&age, name, to_string(weight), to_string(height));
    return 0;
}
