#include<iostream>
#include <cmath>
using namespace std;
	void Input_data( int *arr1,int *arr2);      //x-coordinate and y-coordinate
	void Output_data(int *arr1,int* arr2);
	void Distance(int *arr1,int* arr2);         
	void Midpoint(int* arr1,int *arr2) ; 

int main()
{

int arr1[2],arr2[2];
Input_data(arr1,arr2);

Output_data(arr1,arr2);
Distance(arr1,arr2);
Midpoint(arr1,arr2);
}
void Input_data( int *arr1,int *arr2) 
{

cout<<"enter first point x axis"<<" ";		
cin>>*arr1;
cout<<"enter second point x axis"<<" ";
cin>>*arr2;
cout<<"enter first point y axis"<<" ";
cin>>*(arr1+1);
cout<<"enter second point y axis"<<" ";
cin>>*(arr2+1);

}
void Output_data(int *arr1,int* arr2)
{
cout<<"first point x and y coordinates are"<<*(arr1+0)<<"  "<<*(arr1+1)<<endl;
cout<<"second point x and y coordinates are"<<*(arr2+0)<<"  "<<*(arr2+1)<<endl;
}

void Distance(int *arr1,int* arr2)
{
int a,b,k,z,ans;

a=*(arr2+0)-*(arr1+0);
a*=a;

b=*(arr2+1)-*(arr1+1);
b*=b;
ans=sqrt((a+b));
cout<<"AVERAGE IS"<<" "<<ans<<endl;
}

void Midpoint(int* arr1,int *arr2) 
{
float z;

z=(*(arr1+0)+*(arr2+0))/2;
float k;
k=(*(arr1+1)+*(arr2+1))/2;
cout<<"MID POINTS ARE"<<endl;
cout<<z<<"  "<<k<<endl;
}




