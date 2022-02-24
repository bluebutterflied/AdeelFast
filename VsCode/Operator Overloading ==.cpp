#include<iostream> 
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	void assign_values(int a, int b);
	bool operator==(Distance b);
};
void Distance::assign_values(int a, int b) {
	a = feet;
	cout << a;
	b = inches;
	cout << "\t" << b<<"\n";
}
bool Distance::operator==(Distance b) {
	if (feet == b.feet && inches == b.inches)

	{
		cout << feet << "\t" << b.feet<<"\n"<<inches<<"\t "<<b.inches;
		return true;
	}
	else
		return false;
}
int main() {
	Distance d1, d2, d3;

	d1.assign_values(5, 50);
	d2.assign_values(10, 20);
	if (d1 == d2) {
		cout << "\tdistance are equal\n";
		
	}
	else {
		cout << "\tdistance are not equal";
	}
}