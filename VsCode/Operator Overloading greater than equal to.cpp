#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	void assign_values();
	Distance operator>(Distance b);
};
int main() {

}