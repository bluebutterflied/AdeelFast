#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	Distance operator+(Distance b) {
		Distance new_dis;
		new_dis.feet = feet + b.feet;
		new_dis.inches = inches + b.inches;
		return new_dis;
	}
	void get_input() {
		
		cout << "enter feet\n";
		cin >> feet;
		cout << "enter inches\n";
		cin >> inches;
	}
	void print() {
		cout << "new feet is\t" << feet<<"\n";
		cout << "new inches is\t" << inches<<"\n";

	}
};
int main() {
	Distance d1, d2, d3;
	d1.get_input();
	d2.get_input();
	d3 = d1 + d2;
	d3.print();
}