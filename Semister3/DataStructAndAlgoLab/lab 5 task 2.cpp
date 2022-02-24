#include<iostream>
#include<fstream>
#include<list>
using namespace std;
class hashchain{
	private:
	int  *arr;
	public:
		hashchain(){
			arr=new int[3000000];
			for(int i=0;i<3000000;i++){
				arr[i]=0;
			}
		}
		void insert_data(int);
		void remove(int);
		void print_table();
		int hash(int z);
		
};


int hashchain::hash(int key){
	int index;
	index=key%30001;
	return key;
}
void hashchain::insert_data(int z){
	int index=hash(z);
		if(arr[index]==0){
				arr[index]=z;
		}
		else{
		
		for(int i=1;arr[index]!=0;i++){
		index=(((index)%30001)+(i*1))%30001;
		
		}
		arr[index]=z;
	
		
	}
}
void hashchain::remove(int x){
bool check=false;;
int index=hash(x);	
if(arr[index]==0){
	cout<<"number not found\n";
}
else{
	cout<<"number found and deleted\n";
	arr[index]=0;
}
}
void hashchain::print_table(){

	for(int i=0;i<30000;i++){
		if(arr[i]!=0){
			cout<<arr[i]<<endl;
		}
	}
}
int main(){
ifstream read;
hashchain H;
read.open("300k numbers.txt");
 int value;
for(int i=0;i<30000;i++){
	read>>value;
	H.insert_data(value);
	H.hash(value);
}
//H.remove(99);
H.print_table();
}
