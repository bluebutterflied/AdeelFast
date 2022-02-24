#include<iostream>
using namespace std;
template<class Type>
Type larger(Type, Type);
int main() {
	int a = 3, b = 1;
	char x = 'b', y = 'a';
	char arr1[10]="";
	char arr2[10] = "A";
	cout << "greater number is" << larger(a, b) << "\n";
	cout << "greater alphabet is" << larger(x, y) << "\n";
	cout << "greater array is" << larger(arr1, arr2) << "\n";
}
template<class Type>
Type larger(Type x, Type y) {
	if (x >= y) {
		return x;
	}
	else
		return y;
	
}