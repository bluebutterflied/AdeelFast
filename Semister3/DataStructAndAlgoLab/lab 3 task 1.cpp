#include<iostream>
#include<list>
using namespace std;
bool even(int a){
	if(a%2==0){
	
		return true;
}
else{

return false;
}
}
bool odd(int b){
	if(b%2==1){
		return true;

	}
	else 
return false;
}
int main(){
	list<int> l1;
list<int> l2;
int size;int num;
list<int>::iterator i,y;
i=l1.begin();
cout<<"enter size of first list\n";
cin>>size;
for(int y=1;y<=size;y++){
	cout<<"enter "<<y<<" element of first list\n";
	cin>>num;
	l1.insert(i,num);
}

cout<<"enter size of second list\n";
cin>>size;
i=l2.begin();
for(int y=1;y<=size;y++){
	cout<<"enter "<<y<<" element of second list\n";
	cin>>num;
	l2.insert(i,num);
}
cout<<"after merge list is\n";
l1.merge(l2);
for(i=l1.begin();i!=l1.end();i++){
	cout<<*i<<" - ";
}
i=l1.begin();
advance(i,2);
y=l2.begin();
advance(y,2);
cout<<"after aplice list is\n";
l2.splice(y,l1);
for(i=l2.begin();i!=l2.end();i++){
	cout<<*i<<" - ";
}
cout<<"\n";
		l1.remove_if(even);
	
cout<<"after removing even from list1 is\n";
for(i=l2.begin();i!=l2.end();i++){
	cout<<*i<<" - ";
}
cout<<"\n";
cout<<"after removing odd from list 2 is\n";
l2.remove_if(odd);
for(i=l2.begin();i!=l2.end();i++){
	cout<<*i<<" - ";
}
cout<<"\n";
}


