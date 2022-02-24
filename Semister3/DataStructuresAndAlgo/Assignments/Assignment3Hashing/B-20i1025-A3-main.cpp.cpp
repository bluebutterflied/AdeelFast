/*COMMENT SECTION
*****
ROLLNO:20i-1025;
NAME : Adeel;
parametrized constructor take a size from and dynamically create array of list;

destructor deletes the list array;

hash funtion is passed an string by reference and this funcion convert sring capital
aplphabet into lower alphabet and return index;

inser function take string as parameter get its index by calling hash funtion and push
back string at the address(address is index value) in the list;

check_slots funtion display the number of non empty slots;

search function takes the input string and get it index from hash functoin and then
check if list is not empty at that index then using iterator we check that this word 
is in the table[index] or not if present return true otherwise return false;

IN main first it read data form wordlist file and store it in string and then store it 
in table through insert function then create and input file and write data in it and then
search this data with table data and search and update file;******
*/
#include<iostream>
#include<fstream>
#include<list>
using namespace std;
class HashChain{
	private:
		list<string> *table;
		int size;
		public:
			HashChain(int);
			~HashChain();
			void insert(string item);
			bool search(string &str);
			int hash(string&);
			void check_slots();
	
};
void HashChain::check_slots(){
	int z=0;
	for(int i=0;i<size;i++){
		if(!table[i].empty())
		z++;
	}
	cout<<"number of non empty slots are\t"<<z<<"\n";
}
HashChain::hash(string &str){
	int key,sum=0,z=0;
	for(int i=0;i<str.length();i++){
	if(int(str[i])>64&&int(str[i])<93){
		str[i]=int(str[i])+32;
	}
		sum=sum+int(str[i]);
	z++;

}
//cout<<str[z]<<"\n";
		if(str[1]=='\0'){
key=sum;
}
else{
	key=((int(str[0])*sum)+int(str[z-1]))%9883;
}
	return key;
}
HashChain::HashChain(int k){
	size=k;
	table=new list<string>[size];
	
}

HashChain::~HashChain(){
	delete[]table;
	
}
void HashChain::insert(string item){
    int index=hash(item);
	
table[index].push_back(item);

}

bool HashChain::search(string &str){
int key=hash(str);
list<string>::iterator i;
i=table[key].begin();
bool check=false;
if(!table[key].empty()){

for(; i!=table[key].end();i++){

if(*i==str){
	check=true;
	cout<<"word found\n";
	break;
}

}
}
if(check==false){
	cout<<"word not founded\n";
}
	return check;
}


int main(){
	HashChain h(9883);
int key;	
bool check,check1;
	ifstream read;
	read.open("Assig03_wordlist.txt");
	string s[10000];
for(int i=0;i<10000;i++){
		
		read>>s[i];
		h.insert(s[i]);
}
read.close();
	ofstream write;
   int sum,z;
write.open("input.txt");
int menu_num;

while(menu_num!=3){

cout<<"press 1 to input data\npress 2 for showing the non empty slots\npress 3 to exit\n";
cin>>menu_num;
if(menu_num==1){

cout<<"enter the size of array of string for input file\n\t\t(***only int value***)\n";
int size;
cin>>size;
cout<<"enter a string array("<<size<<" words) to input in file \n";
string str[size];
for(int x=0;x<size;x++){
	check=true;
cout<<"enter the "<<x+1<<" word of string array\n";
cin>>str[x];
sum=0,z=0;

//write<<str[x]<<"\n";
for(int y=0;y!=str[x].length();y++){
if((str[x][y]>='A'&&str[x][y]<='Z')||(str[x][y]>='a'&&str[x][y]<='z'))
check1=true;
else{
check1=false;
cout<<"cant search word containing characters other than alphabet\n";
break;
}
}
if(check1==true){
check=h.search(str[x]);

}

if(check==false){
		
		for(int y=0;y!=str[x].length();y++){
			str[x][y]=int(str[x][y])-32;
			
		}
	}

}
//write.close();


//write.open("input.txt");
	for(int i=0;i<size;i++){
		
		write<<str[i]<<"\n";
	}
	
	cout<<"file modified\n";

	
}

else if (menu_num==2){
	h.check_slots();
}	
else if(menu_num==3){
	write.close();
	cout<<"\n\t\tCode Ended";
	break;
}
}
}



