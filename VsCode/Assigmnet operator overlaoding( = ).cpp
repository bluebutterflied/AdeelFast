#include<iostream>
using namespace std;
class student {
private:
	int roll_no;
	
public:
	friend istream& operator>>(istream&, student&);
	friend ostream& operator<<(ostream&, student&);
	student& operator=(student&);
};
istream& operator>>(istream& isobj, student& stuobj) {
	cout << "enter the value of roll no of the student\n";
	isobj >> stuobj.roll_no;
	return isobj;
}
ostream& operator << (ostream& osobj, student& stuobj){
	osobj << stuobj.roll_no << "\n";
	return osobj;
}
student& student::operator=(student& stuobj) {
	if (this != &stuobj) {
		roll_no = stuobj.roll_no;
	}
		return *this;
}
int main() {
	student s1, s2, s3;
	cin >> s1;
	cout << "the value of first student is\t" << s1 << "\n";
	cin >> s2;
	cout << "the value of second student is\t" << s2 << "\n";
	s1 = s2;
	cout <<"the new value of first student is\t" << s1;
}

