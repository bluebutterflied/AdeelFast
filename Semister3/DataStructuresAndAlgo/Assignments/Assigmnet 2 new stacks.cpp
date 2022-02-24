#include<iostream>
#include<fstream>
#include<string>
using namespace std;
template<class datatype>
struct nodetype {
	int info;
	nodetype<datatype>* link;
};
template<class datatype>
class stacks {
private:
	nodetype<datatype>* stacktop;
public:
	stacks() {
		stacktop = NULL;
	}
	bool isEmpty();
	int top();
	void pop();
	void push(int);
	void evaluate_expression(ostream&, istream&, stacks&, int&);
	void evaluate_operator(ostream&, istream&, stacks&, char&);
};
template<class datatype>
void stacks<datatype>::evaluate_expression(ostream& wrtie, istream& read, stacks& s, int& i) {
	for (int y = 1; y < i; y++) {

		char a, temp; int x = 0;
		read >> a;

		int num;
		if (isdigit(a)) {
			read.seekg(-1L, ios::cur);
			read >> num;

			s.push(num);
		}
		else if (a == '+' || a == '-' || a == '*' || a == '/') {
			x++;
			s.evaluate_operator(wrtie, read, s, a);
		}


	}
	cout << s.top();
}
template<class datatype>
void stacks<datatype>::evaluate_operator(ostream& wrtie, istream& read, stacks& s, char& ch) {

	int op1, op2, op3;
	switch (ch) {

	case('+'):

		op1 = s.top();
		s.pop();
		op2 = s.top();
		s.pop();
		op3 = op2 + op1;
		s.push(op3);
		break;
	case('-'):
		op1 = s.top();
		s.pop();
		op2 = s.top();
		s.pop();
		op3 = op2 - op1;
		s.push(op3);
		break;
	case('*'):

		op1 = s.top();
		s.pop();
		op2 = s.top();
		s.pop();
		op3 = op2 * op1;
		s.push(op3);

		break;
	case('/'):

		op1 = s.top();
		s.pop();
		op2 = s.top();
		s.pop();
		op3 = op2 / op1;
		s.push(op3);

		break;
	}

}
template<class datatype>
void stacks<datatype>::push(int x) {
	nodetype<datatype>* newnode;
	newnode = new nodetype<datatype>;
	newnode->info = x;
	newnode->link = NULL;
	if (stacktop == NULL) {
		stacktop = newnode;
	}
	else {
		newnode->link = stacktop;
		stacktop = newnode;
	}
}
template<class datatype>
bool stacks<datatype>::isEmpty() {
	return (stacktop == NULL);
}
template<class datatype>
int stacks<datatype>::top() {
	return stacktop->info;
}
template<class datatype>
void stacks<datatype>::pop() {
	nodetype<datatype>* temp;
	temp = stacktop;
	stacktop = stacktop->link;
	delete temp;
}
int main() {
	stacks<string> s1;


	int menu_num, temp_num;
	menu_num = 100;
	cout << "press 1 to start menu\n";
	cout << "press 0 to end\n";

	cin >> temp_num;
	if (temp_num == 0) {
		cout << "\t\t\tTHANK U\n";
	}
	if (temp_num == 1) {
		cout << "\t\t\tWelcome\n";
	}//while(menu_num!=0){
	//	cout<<"\tpress 1 for evaluate posfix expression\n";
	//	cin>>menu_num;
	//	if(menu_num==0){
				//cout<<"\t\t\tTHANK U\n";
		//	}
		//else if(menu_num==1){
	ofstream write; ifstream read;
	write.open("temp.txt");

	string str;
	//cout<<"enter an expression with space between every digit(operand and operator and";
	//cout<<"do not use space at start and at end)\n";
	getline(cin, str);
	write << str;
	write.close();
	read.open("temp.txt");
	char temp; int i = 0, x = 0;

	while (!read.eof()) {
		read >> temp;
		if (isdigit(temp)) {
			read.seekg(-1L, ios::cur);
			read >> x;
			i++;
		}
		else if (temp == '+' || temp == '-' || temp == '*' || temp == '/') {
			i++;
		}
	}
	read.close();
	read.open("temp.txt");
	s1.evaluate_expression(write, read, s1, i);
}
//}
////}
//}