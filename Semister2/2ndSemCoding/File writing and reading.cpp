#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string str;
ofstream write;

write.open("temp1.txt");


getline(cin,str);
write<<str; 
write.close();
ifstream read;
read.open("temp1.txt");
	char arr2[50];
	while(!read.eof())
{
	
	read.getline(arr2,50);

	cout<<arr2;
	}	
	
	
}



