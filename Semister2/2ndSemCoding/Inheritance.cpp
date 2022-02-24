#include <iostream>
using namespace std;
class rectangle
{
    int length;
    int width;
public:
    void setValues(int l, int w) {length = l; width = w;}
    void print(){cout<<length<<"\t"<<width;}
};
class box:public rectangle
{
    int height;
public:
    setValues(int l, int w, int h){
        rectangle::setValues(l,w);
        height=h;
        }

    void print(){ cout<<"\nbox:"; rectangle::print(); cout<<"\t"<<height<<endl;}
};

int main()
{
    rectangle r;
    r.setValues(5,4);
    r.print();

    box b;
    b.setValues(5,4,3);
    b.print();

    return 0;
}
