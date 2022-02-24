#include<iostream>
using namespace std;
class Distance{
private:
	friend void Friend_function(Distance);
	double feet;
	double inches;
public:
	
	void get_data();
	void print_data();
	Distance() {
		feet = 0;
		inches = 0;
	}
	Distance(double f, double i);
};
Distance::Distance(double f,double i) {
	feet = f;
	inches = i;
}
void Distance::get_data() {
	cout << "enter feet\n";
	cin >> feet;
	cout << "enter inches\n";
	cin >> inches;
}
void Distance::print_data() {
	cout << "the value of feet is\t" << feet << "\n";
	cout << feet;
	cout << "the value of inches is\t" << inches << "\n";
}
void Friend_function(Distance obj) {
	cout << "the values of the feet is\t" << obj.feet << "\n";
	cout << "the values of the inches is\t" << obj.inches << "\n";
	
}
int main() {
	Distance my_distance;
	my_distance.get_data();
	Friend_function(my_distance);
	Distance(2, 3);
}






