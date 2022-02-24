#include<iostream>
using namespace std;
class Distance{
private:
	int feet;
	int inches;
public:
	friend istream& operator>>(istream&, Distance&);
	friend ostream& operator<<(ostream&, Distance&);
	friend Distance operator++(Distance&);
	friend Distance operator--(Distance&);
	Distance();
	Distance(int f, int i);
};
Distance::Distance(int f, int i) {
	feet = f;
	inches = i;
}
istream& operator>>(istream& isobj, Distance& disobj) {
	isobj >> disobj.feet;
	isobj >> disobj.inches;
	return isobj;
}
ostream& operator<<(ostream& osobj, Distance& disobj) {
	osobj << disobj.feet<<"\t";
	osobj << disobj.inches<<"\n";
	return osobj;
}
Distance operator++(Distance& disobj) {
	++disobj.feet;
	++disobj.inches;
	return disobj;
}
Distance operator--(Distance& disobj) {
	--disobj.feet;
	--disobj.inches;
	return disobj;
}
int main() {
	Distance d1(0,0), d2(0,0), d3(0,0),d4(0,0);
	cout << "enter the value of first distance\n";
	cin >> d1;
	cout << "enter the value of sescind distance\n";
	cin >> d2;
	d3 = ++d1;
	d4 = --d2;
	cout << "the resultant value of feet and inches after the increment of first distance is\n "<<d3<<"\n";
cout<< "the resultant value of feet and inches after the decriment of second distance is\n "<<d4<<"\n";

}


