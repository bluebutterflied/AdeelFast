#include<iostream>
using namespace std;
class Student {
private:
	int roll_no;
public:
	void get_input();
	void print();
	Student operator++(int);
};
void Student::get_input(){
	cout << "enter the value of roll_no\n";
	cin >> roll_no;
}
void Student::print() {
	cout << "the roll is\t" << roll_no << "\n";
}
Student Student::operator++(int a) {
	Student temp;
	temp = *this;
	roll_no++;
	return temp;
}
int main() {
	Student s1, s2;
	s1.get_input();
	s2=s1++;
	cout << "the returning value is before incriment due to post incriment is same and that is\n";
	s2.print();
	
}