#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	Distance operator+(Distance);
	Distance operator-(Distance);
	Distance operator*(Distance);
	bool operator==(Distance);
	bool operator!=(Distance);
	Distance();
	Distance(int f, int i);
	void input_feet();
	void input_inches();
	void print();
};
 Distance::Distance() {
	feet = 0;
	inches = 0;
}
 Distance::Distance(int f,int i) {
	 feet = f;
	 inches = i;
}
 void Distance::input_feet() {
	 cout << "enter the value of feet\n";
	 cin >> feet;
 }
 void Distance::input_inches() {
	 cout << "enter the value of inches\n";
	 cin >> inches;
 }
 void Distance::print() {
	 cout << "the value of feet is \t" << feet << "\n";
	 cout << "the value of inches is\t" << inches << "\n";
 }
 Distance Distance::operator+(Distance obj) {
	 Distance result_obj;
	 result_obj.feet = feet + obj.feet;
	 result_obj.inches = inches + obj.inches;
	 return result_obj;
 }
 Distance Distance::operator-(Distance obj) {
	 Distance result_obj;
	 result_obj.feet = feet - obj.feet;
	 result_obj.inches = inches - obj.inches;
	 return result_obj;
 }
 Distance Distance::operator*(Distance obj) {
	 Distance result_obj;
	 result_obj.feet = feet * obj.feet;
	 result_obj.inches = inches * obj.inches;
	 return result_obj;
 }
 bool Distance::operator!=(Distance obj) {
	 return(
		 feet != obj.feet ||
		 inches != obj.inches
		 );
 }
 bool Distance::operator == (Distance obj) {
	 return (
		 feet == obj.feet && inches == obj.inches
		 );
 }
 
int main() {
	Distance first_distance, second_distance, third_distance, fourth_distance;
	first_distance.input_feet();
	first_distance.input_inches();
	second_distance.input_feet();
	second_distance.input_inches();
	third_distance=first_distance - second_distance;
	fourth_distance = first_distance + second_distance;
	if (first_distance == second_distance) {
		cout << "both feet and inches of first and second distance are equal\n";
	}
	else
		cout << "both feet and inches of first and second distance are not equal\n";

	if (second_distance != third_distance) {
		cout << "both feet and inches of sescond and third distances are not equal\n";
	}
	else
		cout << "both feet and inches of second and third distances are equal\n";
	if (fourth_distance != third_distance) {
		cout << "both value of feet and inches of third and fourth distance are not equal\n";
	}
	else
		cout << "both the value of feet and inches of third and fourth distances are equal\n";

}
