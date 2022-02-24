#include<iostream>
#include<fstream>
#include<list>
using namespace std;
class hashchain{
	private:
	list<int>*hashtable;
	int size;
	public:
	hashchain(int);
		void insert_data(int);
		void remove(int);
		void print_table();
		int hash(int z);
		void bigo();
		
};
void hashchain::bigo(){
	int z=0;
	for(int i=0;i<size;i++){
		if(!hashtable[i].empty()){
			z++;
		}
	}
	float bigoo = size;
	bigoo=bigoo/z;
	cout<<bigoo;
}
hashchain::hashchain(int x){
size=x;
hashtable=new list<int>[size];
}
int hashchain::hash(int key){
	int index;
	index=key%300000;
	return index;
}
void hashchain::insert_data(int z){
	int index=hash(z);
		hashtable[index].push_back(z);
		
	}

void hashchain::remove(int k){
bool check=false;;
int index=hash(k);	
if(hashtable[index].empty()){
	cout<<"number not found\n";
}
else{
	
	list<int>::iterator x;
	for(x=hashtable[index].begin();x!=hashtable[index].end();x++){
	if(k==*x);
	cout<<"number found and deleted\n";
	hashtable[index].pop_back();
	}
}
}
void hashchain::print_table(){
	list<int>::iterator x;
	
for(int i=0;i<size;i++){
for(x=hashtable[i].begin();x!=hashtable[i].end();x++)
	cout<<*x<<"\n";
}
}
int main(){
ifstream read;
hashchain H(300000);

read.open("300k numbers.txt");
 int value;
for(int i=0;i<300000;i++){
	read>>value;
	H.insert_data(value);

}

//H.remove(53700000);
//H.print_table();
H.bigo();
}
