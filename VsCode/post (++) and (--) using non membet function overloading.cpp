#include<iostream>
using namespace std;
class student{
private:
	int roll_no;
public:
	void get_input();
	void print();
	friend student operator--(student&,int);
};
void student::get_input() {
	cout << "enter roll_no";
	cin >> roll_no;
}
void student::print() {
	cout << "the roll_no is\t" << roll_no;
}
student operator--(student& stuobj, int) {
	student temp;
	temp = stuobj;
	stuobj.roll_no--;
	return temp;
}
int main() {
	student s1, s2;
	s1.get_input();
	s2=s1--;
	s1.print();
}