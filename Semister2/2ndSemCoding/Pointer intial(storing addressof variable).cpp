#include<iostream>
using namespace std;
void f(int*);
int main()
{
    int x = 2;
    f(&x);
    cout << x;
}

void f(int *n)
{
    *n++;
}


