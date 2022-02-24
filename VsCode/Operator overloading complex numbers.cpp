#include<iostream>
using namespace std;
class Complex {
private:
	int real;
	int img;
public:
	void get_input() {
		cout << "enter real part";
		cin >> real;
		cout << "enter imaginary part";
		cin >> img;

	}
	Complex operator+(Complex b) {
		Complex result;
		result.real = real + b.real;
		result.img = img + b.img;
		return result;
	}
	void print() {
		cout << "Result Real Number Is \t" << real<<"\n";
		cout << "Resultant Img Part Is \t" << img<<"\n";
	}
};
int main() {
	Complex c1, c2, c3;
	c1.get_input();
	c2.get_input();
	c3 = c1 + c2;
	c3.print();
}