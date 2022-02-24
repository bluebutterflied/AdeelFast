#include<iostream>
using namespace std;
struct nodetype {
	int data;
	nodetype* next;
};
class Link_List {

	nodetype* head;

public:
	Link_List() {
		head = NULL;
	}
	void add(int x);

	void print() {
		while (head != NULL) {
			cout << head->data << "-";
			head = head->next;
		}
		cout << "\n";
	}
	Link_List operator+(Link_List b);
	bool operator==(Link_List b);
	bool operator>(Link_List b);
	friend bool operator<(Link_List l1, Link_List l2);
	void operator*(int k);
};
void Link_List::add(int x) {
	nodetype* first_num;
	first_num = new nodetype;
	first_num->data = x;

	if (head == NULL) {
		head = first_num;
		first_num->next = NULL;

	}
	else {
		nodetype* second_num;
		second_num = new nodetype;
		second_num = head;
		while (second_num->next != NULL) {
			second_num = second_num->next;
		}
		second_num->next = first_num;
		first_num->next = NULL;
	}

}
Link_List Link_List::operator+(Link_List b) {
	Link_List c;

	nodetype* node = head;
	if (head == NULL)
	{

	}
	else
	{
		while (node->next != NULL)
		{
			c.add(node->data);
			node = node->next;
		}
		int i = node->data;
		c.add(i);
	}
	nodetype* d = b.head;
	while (d != NULL)
	{
		c.add(d->data);
		d = d->next;
	}
	return c;
}

bool Link_List::operator==(Link_List b)
{
	bool c = true;
	nodetype* node = head;
	nodetype* d = b.head;
	while (node != NULL)
	{
		if (d->data != node->data)
		{
			c = false;
			break;
		}
		else
		{
			node = node->next;
			d = d->next;
		}
	}
	return c;
}
bool operator<(Link_List a, Link_List b)
{
	int sum1 = 0, sum2 = 0;
	nodetype* node = a.head;
	nodetype* d = b.head;
	while (node != NULL && d != NULL)					// CALCULATING BOTH SUM IN ONE LOOP
	{
		sum1 = sum1 + node->data;
		node = node->next;
		sum2 = sum2 + d->data;
		d = d->next;
	}
	if (sum1 < sum2)
	{
		return true;
	}
	else
		return false;
}
bool Link_List::operator>(Link_List b)
{
	int sum1 = 0, sum2 = 0;
	nodetype* node = head;
	while (node != NULL)							//CALCULATING BOTH SUM IN TWO DIFFERENT LOOPS
	{
		sum1 = sum1 + node->data;
		node = node->next;
	}
	nodetype* d = b.head;
	while (d != NULL)
	{
		sum2 = sum2 + d->data;
		d = d->next;
	}
	if (sum1 > sum2)
	{
		return true;
	}
	else
		return false;
}
void Link_List::operator*(int k)
{
	nodetype* node = head;
	while (node != NULL)
	{
		node->data = node->data * k;
		node = node->next;
	}
}

int main() {
	Link_List l1, l2, l3;
	int x, a;
	cout << "enter the length you want of the first Link list\n";
	cin >> x;
	cout << "enter " << x << " numbers of the first link list\n";
	for (int i = 0; i < x; i++) {
		cin >> a;
		l1.add(a);
	}
	//l1.print();
	cout << "enter the length you want of the second Link list\n";
	cin >> x;
	cout << "enter " << x << " numbers of the second link list\n";
	for (int i = 0; i < x; i++) {
		cin >> a;
		l2.add(a);
	}
	l3 = l1 + l2;
	l3.print();

	if (l1 == l2)
	{

		cout << "Both linked lists are equal\n";
		cout << "n";
	}
	else
	{
		cout << "Linked lists are not equal\n";

	}
	if (l1 > l2)
	{
			cout << "Sum of elements of L1 is greater than that of L2\n";
		
	}
	else
	{ 
		cout << "Sum of elements of L2 is not smaller than that of L1\n";
	
	}
	//int x;
	int y;
	cout << "Enter the linkList number for multiplication  ";
	cin >> y;
	cout << "Enter number to multiply with linklist ";
	cin >> x;
	if (y == 1)
	{
		l1* x;
		l1.print();
	}
	else if (y == 2)
	{
		l2* x;
		cout << "THE NEW LINK LIST is";
		l2.print();
	}

}

