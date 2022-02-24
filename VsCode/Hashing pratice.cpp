#include<iostream>
using namespace std;
struct student {
	int roll_no;
	string name;
	int phone;
};
student student_array[10];
void insert(student s) {
	int index;
	index = s.roll_no % 10;
	while (student_array[index].roll_no != 0) {
		index = (index + 1) % 10;
	}
	student_array[index] = s;
}
void search() {
	cout << "enter the key of number u want to search\n";
	int index;
	cin >> index;
	for (int i = 0; i < 10; i++) {

	}
}
int main() {

	student temp;
	for (int i= 0; i < 5; i++) {
		cin >> temp.name >> temp.roll_no >> temp.phone;
	}
	insert(temp);

}
