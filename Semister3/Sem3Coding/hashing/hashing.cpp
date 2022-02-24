#include<iostream>
using namespace std;
class hash{
private:
int items_size;
int index;
struct items{
	string name;
	int roll_no;
};
items datas[10];
public:
hash(){
	items_size=10;
	for(int i=0;i<10;i++){
		datas[i].roll_no=0;
	}
}
void insert_data(struct items);
	void intialize_struct();
	void search();
	
};


	void hash::intialize_struct(){
	for(int i=0;i<5;i++){
		items temp;
		cout<<"enter name\n";
		cin>>temp.name;
		cout<<"enter roll_no\n";
		cin>>temp.roll_no;
		insert_data(temp);
	}
	}

void hash::insert_data(items temp){
		index=temp.roll_no%10;
	for( int i=1;datas[index].roll_no!=0;i++){
		index=((temp.roll_no%10)+(i*i))%10;
	}
	datas[index]=temp;
	cout<<"data at " << index <<" index is\t"<<datas[index].roll_no<<"\n";
}

void hash::search(){
	
	cout<<"enter the number u want to search\n";
	int num;
	cin>>num;
	int i=1;
	index=num%10;
	
		bool check;
	check =false;
	while(check==false){
		if(datas[index].roll_no==num){
			check=true;
			cout<<"\tnumber found\n";
			break;
		}
		else{
			index=((num%10+(i*i))%10);
			
		}
		
		if(i==10){
			cout<<"number not found\n";
			break;
		}
		i++;
	}
}

int main(){
	hash data;
		data.intialize_struct();
		data.search();
}
