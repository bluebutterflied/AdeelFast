#include<iostream>
using namespace std;
int main() {
	int temp;
	int arr[5] = { 1,6,3,10,2 };
	cout << "unsorted array is\n";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << "\t";
	}
	cout << "\n";
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (arr[i] < arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			
			}
			cout << i << "\t";
			//out << j;
		}
		cout << "\n";
	}
}