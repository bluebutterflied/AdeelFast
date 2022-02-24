/*
20I-1025;
Adeel Akhtar;
assigment 04;
.In the main there is menu which creates object of tree class and call different function;
.IN the person hydra file it read data from file and stores it in person structure;
.IN the tree hydra file there are different functions.
.Construct tree saves data to tree from person struture;
.In append data function we call insert node which appends the data by taking person data
entered by user.
.In search function emial is passed as parameter and and it is searched;
.To delete a function remoce funtion send root and email as parameter to delete node function.
 which checks if email is found it call deletion function which delete the data.
.show nodes in order is call from main and it passes display in order function which
 displays the data.
.write data call writing function and writing function write data in file.
*/







#include"B-20I1025-A4-IntBinaryTree.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
	int num=100;
	person p[501];ifstream read;
	stringBinaryTree b;
while(num!=6){
		
		cout<<"press 0 to read data from file.\npress 1 to construct tree.\npress 2 to append data in tree.\npress 3 to search data in tree.\n";
cout<<"press 4 to delete data from tree.\npress 5 to display in order.\npress 6 to exit.\n";
	cin>>num;
	string email,email1;
	
	
	if(num==0){
	
	read_data(read,p);
	
}
	else if(num==1){
	
	b.construct_tree(p);
}
else if(num==2){

	b.append_data(b);
}
	
	else if(num==5){
	
	b.show_nodes_inorder();
}
else if (num==3){

	cout<<"enter email of person u want to search\n";
	cin>>email;


b.search_node(email);
}
else if(num==4){

cout<<"enter email of person u want to delete\n";
cin>>email1;
b.remove(email1);
}
else if (num==6){
cout<<"file updated code ended\n";
b.write_data(p);
break;
}

}
return 0;
}

