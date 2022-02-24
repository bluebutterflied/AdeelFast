#include<iostream>
using namespace std;
void input(int *arr);
void LEADERS(int *arr);
int main()
{	
int arr[6];
input(arr);
LEADERS(arr);
}

void input(int *arr)
{
cout<<"enter name of 6 elements"<<endl;
for(int i=0;i<6;i++)	

{
	cin>>*(arr+i);
}
}
void LEADERS(int *arr)
{
	cout<<"leaders are "<<endl;
int x=0,k=0;
for(int i=0;i<6;i++)
{
	k=0;int j=0;
	while( j<6)
k++;
	{
	
if(*(arr+i)>*(arr+i+1))
{
x++;
}
}
j--;

if(x==k)
cout<<*(arr+i)<<"  ";
}
}
	      

