#include<iostream>
#include<fstream>
using namespace std;
struct Data{
	char first_line[34],first_name[20],last_name[20],rollno[20];
int serial_no,fsc_marks,entry_test_marks;
};
struct insert_data{
	char first_line[34],first_name[20],last_name[20],rollno[20];
int serial_no,fsc_marks,entry_test_marks;
};
void check_serial(struct Data[],struct insert_data[]);
void removal(struct Data[],struct insert_data[]);
void display(struct Data[]);
void insertion(struct Data[]);
void checking(struct Data[]);
int main(){
	int j=0;
char first_line[34],first_name[20],last_name[20],rollno[20];

int serial_no,fsc_marks,entry_test_marks;
Data d[17];
insert_data i[17];
ifstream read;
read.open("lab_15.txt");

for(int i=0;i<34;i++){
read>>d[0].first_line[i];
}
for(int i=0;i<17;i++){
read>>d[i].serial_no;
read>>d[i].rollno;
read>>d[i].first_name;
read>>d[i].last_name;
read>>d[i].fsc_marks;
read>>d[i].entry_test_marks;

}
read.close();
check_serial(d,i);
removal(d,i);
display(d);
//inserion(d);
checking(d);
}


void check_serial(Data d[17],insert_data i[17]){
	int j=1,o=0;
	ofstream write;
		write.open("lab_15.txt");
ifstream read;
read.open("lab_15.txt");
for(int a=0;a<34;a++){
write<<d[0].first_line[a];
if(a==8||a==15||a==19||a==23)
write<<"\t";
}
write<<"\n";
	for(int k=0;k<17;k++){
	
		if(d[k].serial_no==j)
	{
	    j++;
	    write<<d[k].serial_no;
	
write<<"\t";
write<<d[k].rollno;
write<<"\t";
write<<d[k].first_name;
write<<" ";
write<<d[k].last_name;
write<<"\t";
write<<d[k].fsc_marks;
write<<"\t";
write<<d[k].entry_test_marks;
write<<"\n";
	    
}
else {


	cout<<"The "<<j<<" serial no is missing enter its data\n";
i[j-1].serial_no=j;
cout<<"enter the roll no\n";
cin>>i[j-1].rollno;
cout<<"enter first name\n";
cin>>i[j-1].first_name;
cout<<"enter last name\n";
cin>>i[j-1].last_name;
cout<<"enter fsc marks\n";
cin>>i[j-1].fsc_marks;
cout<<"enter entry test marks\n";
cin>>i[j-1].entry_test_marks;


write<<i[j-1].serial_no;
write<<"\t";
write<<i[j-1].rollno;
write<<"\t";
write<<i[j-1].first_name;
write<<" ";
write<<i[j-1].last_name;
write<<"\t";
write<<i[j-1].fsc_marks;
write<<"\t";
write<<i[j-1].entry_test_marks;
write<<"\n";

j++;

k--;
}
if(j==18){
	break;
}
	}
	write.close();
	read.close();

read.open("lab_15.txt");
	for(int i=0;i<34;i++){
read>>d[0].first_line[i];
}
for(int i=0;i<17;i++){
read>>d[i].serial_no;
read>>d[i].rollno;
read>>d[i].first_name;
read>>d[i].last_name;
read>>d[i].fsc_marks;
read>>d[i].entry_test_marks;

}
cout<<"\t\tAll The Serial Numbers Are Filled In The File.\n";
}

void removal(Data d[17],insert_data i[17]){
for(int i=0;i<17;i++){	
for(int j=0;j<20;j++){
	if(d[i].first_name[j]=='#'){
		for(int k=j;k<20;k++){
		d[i].first_name[k]=d[i].first_name[k+1];
		
	}
	}
}	
	
}

for(int i=0;i<17;i++){	
for(int j=0;j<20;j++){
	if(d[i].last_name[j]=='#'){
		for(int k=j;k<20;k++){
		d[i].last_name[k]=d[i].last_name[k+1];
		
	}
	}
}	
	
}
ofstream write;
write.open("lab_15.txt");
for(int a=0;a<34;a++){
write<<d[0].first_line[a];
if(a==8||a==15||a==19||a==23)
write<<"\t";
}
write<<"\n";
	for(int k=0;k<17;k++){
	    write<<d[k].serial_no;
	
write<<"\t";
write<<d[k].rollno;
write<<"\t";
write<<d[k].first_name;
write<<" ";
write<<d[k].last_name;
write<<"\t";
write<<d[k].fsc_marks;
write<<"\t";
write<<d[k].entry_test_marks;
write<<"\n";
	    
}
cout<<"\t\t All The # Are Removed From The Names.\n";

}

void display(struct Data d[17]){
cout<<"\t\tenter the name or roll no of the student u want to show data\n";
cout<<"\t\tpress 1 to enter name or 2 to enter roll no\n";
int x,a=0;	int z=0;
char first_name[20],last_name[20],rollno[20];
cin>>x;
if(x==1){
	cout<<"\t\tenter first name\n";
	cin>>first_name;
	cout<<"\t\tenter second name\n";
	cin>>last_name;

	for(int k=0;k<17;k++){
	
	for(int i=0;d[k].first_name[i]!='\0';i++){

	z++;
if(first_name[i]==d[k].first_name[i]&&last_name[i]==d[k].last_name[i])
{
a++;	
}

}

if(a==z){
cout<<"\t\tserial no of student is\t"<<d[k].serial_no<<"\n";
	cout<<"\t\tname of student is\t"<<d[k].first_name<<" "<<d[k].last_name<<"\n";
		cout<<"\t\trollno of student is\t"<<d[k].rollno<<"\n";
		cout<<"\t\tfsc marks of student is\t"<<d[k].fsc_marks<<"\n";
		cout<<"\t\tentry test marks of student is\t"<<d[k].entry_test_marks<<"\n\n\n";
}

a=0;
z=0;

}
}

else if(x==2){
	cout<<"\t\tenter rollno\n";
	cin>>rollno;
	
		for(int k=0;k<17;k++){
	
	for(int i=0;d[k].rollno[i]!='\0';i++){

	z++;
	if(rollno[i]==d[k].rollno[i]){
		a++;
	}
}

	if(a==z){
cout<<"\t\tserial no of student is\t"<<d[k].serial_no<<"\n";
	cout<<"\t\tname of student is\t"<<d[k].first_name<<" "<<d[k].last_name<<"\n";
		cout<<"\t\trollno of student is\t"<<d[k].rollno<<"\n";
		cout<<"\t\tfsc marks of student is\t"<<d[k].fsc_marks<<"\n";
		cout<<"\t\tentry test marks of student is\t"<<d[k].entry_test_marks<<"\n\n\n";
}
	a=0;z=0;
}
}
}


/*
*****************************************I TRIED INSERION BUT IT CAUSES SOME ERROR SO I COMMENT IT OUT******************

void inserion(struct data d[17]){
	int a;
	cout<<"\t\tenter the serial position where u want to enter data\n";
	cin>>a;
	ofstream write;
	write.open("lab_15.txt");
	
	for(int a=0;a<34;a++){
write<<d[0].first_line[a];
if(a==8||a==15||a==19||a==23)
write<<"\t";
}
write<<"\n";

i[j-1].serial_no=j;
cout<<"enter the roll no\n";
cin>>i[j-1].rollno;
cout<<"enter first name\n";
cin>>i[j-1].first_name;
cout<<"enter last name\n";
cin>>i[j-1].last_name;
cout<<"enter fsc marks\n";
cin>>i[j-1].fsc_marks;
cout<<"enter entry test marks\n";
cin>>i[j-1].entry_test_marks;


write<<i[j-1].serial_no;
write<<"\t";
write<<i[j-1].rollno;
write<<"\t";
write<<i[j-1].first_name;
write<<" ";
write<<i[j-1].last_name;
write<<"\t";
write<<i[j-1].fsc_marks;
write<<"\t";
write<<i[j-1].entry_test_marks;
write<<"\n";

j++;

k--;	
}

*/
void checking(struct Data d[17]){
int temp;	
	for(int i=0;i<16;i++){
		for(int j=i+1;j<17;j++){
		
if(d[i].entry_test_marks<d[i+1].entry_test_marks){
temp=d[i].entry_test_marks;
d[i].entry_test_marks=d[i+1].entry_test_marks;
d[i+1].entry_test_marks=temp;
}		
	}
	}
	cout<<"\t\tMinimum marks of students in file are "<<d[16].entry_test_marks<<"\n";
	for(int i=0;i<16;i++){
	for(int j=i+1;j<17;j++){
	
		
if(d[i].entry_test_marks>d[i+1].entry_test_marks){
temp=d[i].entry_test_marks;
d[i].entry_test_marks=d[i+1].entry_test_marks;
d[i+1].entry_test_marks=temp;
}		
	}
	}
	cout<<"\t\tMaximum marks of students in file are "<<d[16].entry_test_marks<<"\n";
}

