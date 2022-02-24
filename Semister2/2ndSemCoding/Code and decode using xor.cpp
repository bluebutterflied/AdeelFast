#include<iostream>
using namespace std;
void code(char arr[],char);
void decode(char arr[],char);
int main()
{
char k;	
char arr[50],x;	
code(arr,x);
decode(arr,k);
}
void code(char arr[],char x)
{
cout<<"enter code"<<endl;
cin.getline(arr,50);
x='n';
for(int i=0;arr[i]!='\0';i++)
{
arr[i]=arr[i]^x;

}

}
void decode(char arr[],char k)
{
cout<<"enter your secret key"<<endl;
cin>>k;
for(int i=0;arr[i]!='\0';i++)
{
arr[i]=arr[i]^k;

}
cout<<arr;
}






