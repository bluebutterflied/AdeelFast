#include<iostream>
using namespace std;
struct library{
char name[50];
int accessionnumber;
char title[50];
char authorname[50];
int priceofthebook; 
int flag; 	

};
struct name1{
char authorname2[50];	
};
struct title1{
char tit[50];	
};
int check(library lib[],name1 a);
int display( library lib[] ,int);
int title(library lib[],title1 q );
int order(library lib[]);	
int main()
{
title1 q;
name1 a;	
library lib[5];
for(int i=1;i<=2;i++)
{
cout<<"enter name of book"<<endl;
cin>>lib[i].name;
cout<<"enter accession number of book"<<endl;
cin>>lib[i].accessionnumber;
cout<<"enter title of book"<<endl;
cin>>lib[i].title;
cout<<"enter the author name of this book"<<endl;
cin>>lib[i].authorname;
cout<<"enter price of book"<<endl;
cin>>lib[i].priceofthebook;
cout<<"press 1 if book is issused and press 0 if book is not issused"<<endl;
cin>>lib[i].flag;
}
cout<<endl<<endl;
cout<<"enter accession number of the book for displaying its detail"<<endl;
int x;
cin>>x;
display(lib,x);
cout<<"enter the name of author"<<endl;
cin>>a.authorname2;
check(lib,a);
cout<<"enter the title of book you want to check name"<<endl;
cin>>q.tit;
title(lib,q);
order(lib);
}
int display(library lib[],int x){
int z;
for(int i=1;i<=2;i++)
if(x==lib[i].accessionnumber)	
{
z=i;
}
cout<<"name of book is"<<endl;	
cout<<lib[z].name<<endl;
cout<<" title of book of book is"<<endl;	
cout<<lib[z].title<<endl;
cout<<"the author name of this book is"<<endl;
cout<<lib[z].authorname<<endl;
cout<<"price of the book"<<endl;
cout<<lib[z].priceofthebook<<endl;
if(lib[z].flag==1)
{
cout<<"book is issused"<<endl;

}
else
{
cout<<"book is not issused"<<endl;	
}
	
}
int check(library lib[],name1 a)
{
int o=0,k=0;
cout<<"books are"<<endl;
for(int y=1;y<=2;y++)
{
		
for(int i=0;a.authorname2[i]!='\0';i++)
{
o++;		
if(lib[y].authorname[i]==a.authorname2[i])
{
k++;
}

}

if(o==k)
{
cout<<lib[y].name<<endl;
}
o=0;
k=0;
}
}






int title(library lib[],title1 q)
{
	int o=0,k=0;
for(int y=1;y<=2;y++)
{
		
for(int i=0;q.tit[i]!='\0';i++)
{
o++;		
if(lib[y].title[i]==q.tit[i])
{
k++;
}

}

if(o==k)
{
cout<<lib[y].name<<endl;
}
o=0;
k=0;
}
}

int order(library lib[])
{
	int temp, y=1;
	char temp1[50];
for(int i=1;i<2;i++)
{

if(lib[i].accessionnumber>lib[y].accessionnumber)
{
temp=lib[y].accessionnumber;	
lib[y].accessionnumber=lib[i].accessionnumber;	
	

lib[i].accessionnumber=temp;

}
}
cout<<endl<<endl;
cout<<"books in asscession order are"<<endl;
for(int z=1;z<=2;z++)
{
cout<<lib[z].accessionnumber<<endl;
}
}



















