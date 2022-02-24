#include<iostream>
#include<cmath>
using namespace std;
void Input_data( int *arr1,int *arr2);
void Output_data(int *arr1);
void Distance(int *arr1,int* arr2);         
void Midpoint(int* arr1,int *arr2); 
int main(){
	int arr1[2],arr2[2];
	Input_data(arr1,arr2);
	Distance(arr1,arr2);
}
void Input_data( int *arr1,int *arr2){

	cout<<"enter the  x coordinate of first point\n";
	cin>>*arr1;
	cout<<"enter the x coordinate of second point\n";
	cin>>*(arr1+1);
		cout<<"enter the  y coordinate of first point\n";
	cin>>*arr2;
	cout<<"enter the y coordinate of second point\n";
	cin>>*(arr2+1);
	
	
}
void Distance(int* arr1,int *arr2){
	int d,d1,d2;
	d1=*(arr1+1)-*arr1;
	d1*=d1;
	d2=*(arr2+1)-*arr2;
d2*=d2;
d=sqrt((d1+d2));
cout<<d;
}

