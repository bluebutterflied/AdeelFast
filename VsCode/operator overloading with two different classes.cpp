#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;
public:
	friend Distance operator+(Distance a,Distance b);
	void input() {
		feet = a;
		inched = b;
	}
};
Distance operator+(Distance a, Distance b);