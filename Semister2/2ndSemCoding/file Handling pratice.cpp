#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
int  x  =	7;	double  d  =  -1.32489; char  c  = '$'; 	
	ofstream write;
	write.open("temp.txt",ios::out|ios::binary);

	
	write.write((char*)&x,sizeof(int));
	write.write((char*)&d,sizeof(double));
	write.write (( char *)&c,  sizeof ( char )); 
	write.close();
	
	ifstream read;
	read.open("temp.txt",ios::in|ios::binary);
	read.read((char*)&x,sizeof(int));
	read.read((char*)&d,sizeof(double));
	read.read((char*)&c,sizeof(char));

	read.close();
	cout  <<  "x  =  "  <<  x  <<  endl ;
	cout	<<	"d	=	"	<<	d	<<	endl ;
	cout	<<	"c	=	"	<<	c	<<	endl ;
return  0; 

}















