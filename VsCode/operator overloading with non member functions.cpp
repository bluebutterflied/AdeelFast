#include<iostream>
using namespace std;

class Distance {
private:
	int feet;
	int inches;
public:
	void input();
	friend Distance operator+(Distance a, Distance b);


void print() {
	cout << "feets are\t" << feet<<"\n";
	cout << "inches are\t" << inches<<"\n";
}
};
void Distance::input() {
	cout << "enter value of feet\t\n";
	cin >> feet;
	cout << "enter value of inches\t\n";
	cin >> inches;

}
Distance operator+(Distance a, Distance b) {
	Distance result;
	result.feet = a.feet + b.feet;
	result.inches = a.inches + b.inches;
	cout << "\n"<<result.feet<<"\n";
	return result;
}
int main() {
	Distance d1, d2, d3;
	d1.input();
	d2.input();
	d3 = d2 + d1;
	d3.print();

}
