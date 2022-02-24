#include<iostream>
using namespace std;
class box {
private:
	int length;
	int width;
public:
	friend box operator+(box, box);
	friend bool operator==(box, box);
	box();
	box(int l, int w);
	void input_data();
	void print();
};
box::box() {
	length = 0;
	width = 0;
}
box::box(int l, int w) {
	length = l;
	width = w;
}
box operator+(box obj1, box obj2) {
	box result_obj;
	result_obj.length = obj1.length + obj2.length;
	result_obj.width = obj1.width + obj2.width;
	return result_obj;
}
bool operator==(box obj1,box obj2) {
	return(obj1.length == obj2.length
		&& obj1.width == obj2.width);
}
void box::input_data() {
	cout << "enter the value of length of box\n";
	cin >> length;
	cout << "enter the value of width of box\n";
	cin >> width;
}
void box::print() {
	cout << "the value of length of box after the sum is\t" << length << "\n"; 
	cout << "the value of width of box after the sum is\t" << width << "\n";

}
int main() {

	box(0,0);

	box b1, b2, b3;
	b1.input_data();
	b2.input_data();
	b3=b1 + b2;
	if (b1 == b2) {
		cout << "both the values of box1 and box2 are same\n";
	}
	else
		cout << "both the values of box1 and box2 are not same\n";
	b3.print();
}