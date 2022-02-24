#include<iostream>
#include<list>
using namespace std;
class hash{
	private:
		int buckets;
		list<int> *table;
		public:
			hash(int x);
			void insert_data(int);
			int hash_function(int);
			void search_and_delete(int);
			void display_hash();
            
};
hash::hash(int x){
	buckets =x;
table=new list<int>[buckets];
}
int hash::hash_function(int num){
	return num%buckets; 
}
void hash::insert_data(int key){
	int index=hash_function(key);
	table[index].push_back(key);
}
void hash::search_and_delete(int x){
	int index=hash_function(x);
	list<int>::iterator i;
	for(i=table[index].begin();i!=table[index].end();i++){
		if(*i==x){
			cout<<"number found\n";
			break;
		}
	}
	 if(i!=table[index].end()){
		table[index].erase(i);
	}
	
}
void hash::display_hash(){
	list<int>::iterator i;
	for(int y=0;y<buckets;y++){
	cout<<"at "<<y;
		for(i=table[y].begin();i!=table[y].end();i++){
			cout<<"\t"<<*i;
		}
		cout<<"\n";
	}

}
int main(){
	hash h(7);
	h.insert_data(15);
	h.insert_data(11);
	h.insert_data(27);
	h.insert_data(8);
	h.insert_data(12);
    h.search_and_delete(12);
    h.display_hash();
}
