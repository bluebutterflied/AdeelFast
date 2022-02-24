#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	friend ostream &operator<<(ostream&, Distance&);
	friend istream &operator>>(istream&, Distance&);
	Distance();
	Distance(int f, int i);
};
Distance::Distance() {
	feet = 0;
	inches = 0;
}
Distance::Distance(int f,int i) {
	feet = f;
	inches = i;
}

ostream &operator<<(ostream &osobj, Distance &diobj) {
	osobj << "the value of feet is\t" << diobj.feet << "\n";
	osobj << "the value of inches is\t" << diobj.inches << "\n";
	return osobj;
}
istream& operator>>(istream&isobj, Distance&disobj) {
	cout << "enter the value of feet\n";
	isobj >> disobj.feet;
	cout << "enter the value of inches\n";
	isobj >> disobj.inches;
	return isobj;
}
int main() {
	Distance(0, 0);
	Distance d1, d2;
	cin >> d1;
	cin >> d2;
	cout << d1;
	cout << d2;

}
