#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Person {
public:
	void read_data(int);
	string get_First_Name();
	string get_Last_Name();
	string get_Telephone();
	string get_email();
	void print();

private:
	string First_Name;
	string Last_Name;
	string Telephone;
	string email;
};

void Person::read_data(int x) {

	ifstream read;
	string temp;
	read.open("Assig01-person-data.txt");
	read.seekg(34L, ios::beg);
	for (int i = 0; i < x; i++) {
		read >> temp;
	}
	read >> First_Name;
	read >> Last_Name;
	read >> Telephone;
	read >> email;

}
void Person::print() {
	cout << First_Name << "\t" << Last_Name << "\t" << Telephone << "\t" << email;
}
string Person::get_First_Name() {
	return First_Name;
}
string Person::get_Last_Name() {
	return Last_Name;
}
string Person::get_Telephone() {
	return Telephone;
}
string Person::get_email() {
	return email;
}

