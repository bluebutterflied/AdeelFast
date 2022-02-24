#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
	string str="hi there i am using whatsapp "
	              "ok then bye";
ofstream write;
write.open("temp.txt");
for(int i=0;i<str.size();i++)
write.put(str[i]);	
	
write.close();
ifstream read;
read.open("temp.txt");
char ch;
while(read)
{
	read.get(ch);
	cout<<ch;
	
		
}	
cout<<endl;	
	
	
	
}
