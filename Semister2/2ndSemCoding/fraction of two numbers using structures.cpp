#include<iostream>
using namespace std;
struct fraction_addition{
	int numerator;
	int denominator;
};
void sum(fraction_addition [],int);
int main(){
	fraction_addition f[2];
	sum(f,2);
	
}
void sum(fraction_addition f [],int){
cout<<"enter first number nominator"<<endl;
cin>>f[0].numerator;
cout<<"enter first number denominator"<<endl;
cin>>f[0].denominator;

cout<<"enter second number nominator"<<endl;
cin>>f[1].numerator;
cout<<"enter second number denominator"<<endl;
cin>>f[1].denominator;
cout<<"\nfirst fraction is\t"<<f[0].numerator<<"\t"<<f[0].denominator<<"\n";
cout<<"\nsecond fraction is\t"<<f[1].numerator<<"\t"<<f[1].denominator<<"\n";
int value,value1,fraction;
value=f[0].denominator*f[1].denominator;
value1=(f[0].numerator*f[1].denominator)+(f[1].numerator*f[0].denominator);
cout<<"nominator is\t"<<value<<"\n";
cout<<"denominator is\t"<<value1<<"\n";

cout<<"fraction result is \t"<<value<<"\t"<<value1;
}

