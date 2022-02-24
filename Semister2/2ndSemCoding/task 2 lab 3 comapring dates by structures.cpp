#include<iostream>
using namespace std;
struct date{
int day;
int month;
int year;	
		
};

int main()
{
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


if (d[0].day==d[1].day&&d[0].month==d[1].month&&d[0].year==d[1].year)
{
cout<<"dates are equal"<<endl;
}
else
{
cout<<"dates are not equal"<<endl;
}

return 0;
}
