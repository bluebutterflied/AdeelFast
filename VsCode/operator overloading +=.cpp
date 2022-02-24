#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	void operator+=(Distance b);
	void print();
	void input(int a, int b);
};
void Distance::operator+=(Distance b) {
	feet = feet + b.feet;
	inches = inches + b.inches;
 }
void Distance::print() {
	cout << "The value of feet is\t" << feet<<"\n";
	cout << "The value of inches is\t" << inches<<"\n";
}
void Distance::input(int a,int b) {
	feet = a;
	inches = b;

}

int main() {
	Distance d1, d2;
	d1.input(12, 2);
	d2.input(24, 4);
	d1 += d2;
	d1.print();
}