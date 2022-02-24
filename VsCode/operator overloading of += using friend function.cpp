#include<iostream>
using namespace std;
class sum_equal {
private:
	int feet;
	int inches;
public:
	void get_data();
	void print() {
		cout << "the resultant feet is\n" << feet<<"\n";
		cout << "the resultant inches is\n" << inches << "\n";
	}
void operator+=(sum_equal);
};
void sum_equal::operator+=(sum_equal b) {
	
	feet = feet + b.feet;
	inches = inches + b.inches;
}
void sum_equal::get_data() {
	cout << "enter feet\n";
	cin >> feet;
	cout << "enter inches\n";
	cin >> inches;
}


int main() {
	sum_equal s1, s2;
	s1.get_data();
	s2.get_data();
	s1 += s2;
	s1.print();
}