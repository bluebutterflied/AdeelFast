#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	friend istream& operator>>(istream&, Distance&);
	friend ostream& operator << (ostream&, Distance&);
	Distance operator++();
	Distance operator--();
};
istream& operator>>(istream& isobj, Distance& disobj) {
	isobj >> disobj.feet;
	isobj >> disobj.inches;
	return isobj;
}
ostream& operator<<(ostream& osobj, Distance& disobj) {
	osobj << disobj.feet << "\t\t" << disobj.inches;
	return osobj;
}
Distance Distance::operator++() {
	++feet;
	++inches;
	return *this;
}
Distance Distance::operator--() {
	--feet;
	--inches;
	return *this;
}
int main() {
	Distance d1, d2,d3,d4;
	cout << "enter the value of first distance that is feet and inches respectively\n";
	cin >> d1;
	cout << "enter the value of second distance that is feet and inches respectively\n";
	cin >> d2;
	d3=++d1;
	d4 = --d2;
	cout << "the value after pre incriment in first distance is\t" << d3 << "\n";
	cout << "the value after the pre decriment of second distance is\t" << d4 << "\n";
}

