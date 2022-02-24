#include<iostream>
#include<iomanip>
using namespace std;
class Distance {
private:
	int length;
	int width;
public:
	Distance doubles_dimension();
	void get_input();
	void output();
};
Distance Distance::doubles_dimension() {
	length = 2 * length;
	width = 2 * width;
	return *this;
}
void Distance::get_input() {
	cout << "enter the value of lenght\n";
	cin >> length;
	cout << "enter the value of width\n";
	cin >> width;
}
void Distance::output() {
	cout << "the value of length is"<<length<<"\n";
	//cout << fixed << showpoint<<setprecision(2);
	cout<<"the value of width is\t"<<width<<"\n";
}
int main() {
	Distance d1, d2,d3;
	d1.get_input();
	d2.get_input();
	 d3=d1.doubles_dimension();
	 d3.output();

}