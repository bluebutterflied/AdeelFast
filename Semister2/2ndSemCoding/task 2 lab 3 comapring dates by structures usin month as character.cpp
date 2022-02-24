#include<iostream>
using namespace std;
struct date{
int day;
char month[50];
int year;	
		
};

int main()
{
	int z=0;int x=0;
date d[2];
for(int i=0;i<2;i++)
{

cout<<"enter date"<<endl;
cin>>d[i].day;
cout<<"enter month"<<endl;
cin>>d[i].month;
cout<<"enter year"<<endl;
cin>>d[i].year;
}


for(int y=0;d[0].month[y]!='\0';y++)
{
z++;
if (d[0].month[y]==d[1].month[y])
{
x++;	
}
}

if(x==z)
{
cout<<"month are equal"<<endl;

}

else
{
cout<<"months are not equal"<<endl;

}

return 0;
}
