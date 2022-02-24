#include<iostream>
using namespace std;
struct fraction{
int numerator;
int denominator;
		
	
};
int main()
{
	int result,value,value1;
fraction f[2];

for (int i=0;i<2;i++)
{
if(i==0)
{
		
cout<<"Enter fraction 1(numerator denominator)"<<endl;; 
cin>>f[i].numerator;
cout<<" "<<"/"<<endl<<" ";
cin>>f[i].denominator;
}
else if(i==1){
cout<<"Enter fraction 2(numerator denominator)"<<endl; 
cin>>f[i].numerator;
cout<<" "<<"/"<<endl<<" ";
cin>>f[i].denominator;
}
}
value=(f[0].numerator*f[1].denominator)+(f[1].numerator*f[0].denominator);
value1=(f[0].denominator*f[1].denominator);
cout<<"fraction is"<<endl<<value<<endl;
cout<<" "<<"/"<<endl<<" "<<value1;
return 0;
}
