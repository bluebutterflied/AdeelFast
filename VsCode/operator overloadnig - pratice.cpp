#include<iostream>
using namespace std;
class subtraction {
private:
	int num1;
	int num2;
public:
	void get_data();
	void print();
	subtraction operator-(subtraction);
};
void subtraction::get_data() {
	cout << "enter the first number\n";
	cin >> num1;
	cout << "enter the second number\n";
	cin >> num2;
}
subtraction subtraction::operator-(subtraction b) {
	subtraction result;
	result.num1 = num1 - b.num1;
	result.num2 = num2 - b.num2;
	return result;
}
void subtraction::print() {
	cout << "subtraction of the num1 is\n" << num1<<"\n";
	cout << "subtraction of the num2 is\n" << num2 << "\n";
}
int main() {
	subtraction s1, s2, s3;
	s1.get_data();
	s2.get_data();
	s3 = s1 - s2;
	s3.print();
}