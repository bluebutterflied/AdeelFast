#include<iostream>
using namespace std;
class Complex {
private:
	int real;
	int imaginary;
public:
	friend Complex operator+(Complex,Complex);
	void get_input();
	void print();
};
void Complex::get_input() {
	cout << "enter real_part\n";
	cin >> real;
	cout << "enter complex part\n";
	cin >> imaginary;
}
Complex operator+(Complex a,Complex b) {
	Complex result;
	result.real = a.real + b.real;
	result.imaginary = a.imaginary + b.imaginary;
	return result;
}
void Complex::print() {
	cout << "resultant real value is \n"<<real<<"\n";
	cout << "resultant imanginary value is\n" << imaginary<<"\n";
}


int main() {
	Complex c1, c2, c3;
	c1.get_input();
	c2.get_input();
	c3 = c1 + c2;
	c3.print();
}