#include<iostream>
#include<fstream>
using namespace std;
struct yearly_data	{
char field[50];

};
struct total_year{
float y[18];	
	
};
int main()
{
	int count=0;
yearly_data dis[15];
total_year total;
fstream readfile;
readfile.open("Binary_Data.txt",ios::in|ios::binary);
for(int i=0;i<15;i++)
{
readfile.read((char*)&dis[i].field,50);
}
for(int i=0;i<=15;i++)
{
cout<<dis[i].field;
}
cout<<endl;
//readfile.read((char*)&total.y,sizeof(float));
while(!readfile.eof())
{
for(int i=0;i<18;i++)
{

readfile.read((char*)&total.y[i],sizeof(float));
}
count++;
readfile.read((char*)&total.y,sizeof(float));
}

cout<<count;
}

