#include"B-20i1025-A1-doublyLinklist.h"
#include<iostream>
//#include"Person1.h"

#include<string>
#include<fstream>
using namespace std;
int main() {
	cout<<"\t\t\t\tHELLO\n";
	Person p[500];
	nodetype* writer;
	int x, a = 0;
	link_list<string>l1;

	cout<<"\t\t\tThe Menu Is Given Below\n";
	int menu_num,temp_num;
	menu_num=100;
	cout<<"press 1 to start menu\n";
	cout<<"press 0 to end\n";
	
	cin>>temp_num;
	if(temp_num==0){
			cout<<"\t\t\tTHANK U\n";
		}
	if(temp_num==1){
	cout<<"\t\t\tWelcome\n";
	while(menu_num!=0){
	cout<<"\tpress 2 to read file data into person class\n";
		cout<<"\tpress 3 to store data in link list\n";
		cout<<"\tpress 4 to to find and show data by\n";
		cout<<"\tpress 5 to add person data\n";
		cout<<"\tpress 6 to display data of all the students\n";
		cout<<"\tpress 7 to delete data\n";
		cout<<"\tpress 8 to write data\n";
		cout<<"\t press 9 to one list to other by copy constructor\n";
		cout<<"\t press o to end\n";
		cin>>menu_num;
		if(menu_num==0){
			cout<<"\t\t\tTHANK U\n";
		}
	else if(menu_num==2){		
	ifstream read;
	
	read.open("Assig01-person-data.txt");
		
	for (int i = 0; i < 500; i++) {
		p[i].read_data(a);
		a += 4;
	}
	read.close();
	cout<<"\t DONE!\n";
	
}
else if(menu_num==3){
	l1.store_data(p);
	cout<<"\t\t\tDone!\n";
}
else if(menu_num==4){

	l1.find_and_show();
}
else if (menu_num==5){

	cout << "enter the no of persons u want to add in data list\n";
	cin >> x;

	string l, m, n, o;
	for (int i = 1; i <= x; i++) {
		cout << "enter postion where u want to add data of " << i << " person\n";
		int pos;
		cin >> pos;
		cout << "enter first name of " << i << " person\n";
		cin >> l;
		cout << "enter last name of " << i << " person\n";
		cin >> m;
		cout << "enter phone of " << i << " person\n";
		cin >> n;
		cout << "enter email of " << i << " person\n";
		cin >> o;
		l1.append_data(l, m, n, o, pos);
	}
}
	else if(menu_num==7){
	
	cout << "enter the position of node u want to delete\n";
	int pos1;
	cin >> pos1;
	l1.deletedata(pos1);
}
else if(menu_num==6){

	l1.print();
}
else if(menu_num==8){

	writer=l1.store_data(p);
	l1.write_data(writer);
}
else if(menu_num==9){
	link_list<string>l2=l1;
}
}
}

}

