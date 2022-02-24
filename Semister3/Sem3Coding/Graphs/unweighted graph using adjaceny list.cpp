//CREATING GRAPHS USING LISTS
#include<iostream>
#include<list>
#include<fstream>
#include<queue>
using namespace std;

class graph{
	private:
		list<int>*array;
		int graph_size;
		void dft(int,bool[]);
		public:
			graph(){
				array=NULL;
			}
			void create_graph();
			void print();
			void dft_at_vertex(int index);
			void full_dft();
			void bft();
};
void graph::create_graph(){
	ifstream read;
	int vertex,adjacent_vertex;
	read.open("temp.txt");
	read>>graph_size;
	
	array=new list<int>[graph_size];
	for(int i=0;i<graph_size;i++){
	read>>vertex;
	read>>adjacent_vertex;
		while(adjacent_vertex!=999){
			array[vertex].push_back(adjacent_vertex);
			read>>adjacent_vertex;
		}
	}
	read.close();
}
void graph::print(){
	list<int>::iterator x;
	for(int i=0;i<graph_size;i++){cout<<"AT index "<<i<<" nodes are ";
		for(x=array[i].begin();x!=array[i].end();x++){
			cout<<*x<<" ";
		}
		cout<<"\n";
	}
}
void graph::dft_at_vertex(int vertex){
	bool *visited;
	visited=new bool[graph_size];
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	if(visited[vertex]==false){
		dft(vertex,visited);
	}
	delete []visited;
};
void graph::full_dft(){
	bool *visited;
	visited=new bool[graph_size];
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	
	for(int index=0;index<graph_size;index++){
		if(visited[index]==false){
			dft(index,visited);
		}
	}
}
void graph::dft(int vertex,bool visited[]){
visited[vertex]=true;
cout<<vertex<<" ";
list<int>::iterator x;
for(x=array[vertex].begin();x!=array[vertex].end();x++){
	int w=*x;
	if(visited[w]==false){
	dft(w,visited);
	
	}
}	
}
void graph::bft(){
	bool *visited;
	visited=new bool[graph_size];
	queue<int>Q;
	for(int i=0;i<graph_size;i++){
		visited[i]=false;
	}
	list<int>::iterator x;
	for(int i=0;i<graph_size;i++){
		if(visited[i]==false){
			Q.push(i);
		cout<<" "<<i;
	visited[i]=true;
		
		while(!Q.empty()){
			int y=Q.front();
			Q.pop();
			for(x=array[y].begin();x!=array[y].end();x++){
				int w=*x;
				if(visited[w]==false){
					Q.push(w);
					visited[w]=true;
					cout<<" "<<w<<" ";
				}
			}
		}
	}
}
}
int main(){
graph g1;
g1.create_graph();
g1.print();
g1.dft_at_vertex(0);
cout<<"\n";g1.bft();
}
