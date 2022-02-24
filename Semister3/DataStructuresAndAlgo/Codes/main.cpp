#include "mylinklistclass.h"

class Distance
{
    int feet;
    int inches;
public:
    void setvalues(int a, int b){feet=a;inches=b;}
    int getfeet(){return feet;}
    int getinches(){return inches;}
};

void operator<<(ostream &out, Distance b)
{
    cout<<"feet: "<<b.getfeet()<<"\tinches: "<<b.getinches()<<endl;
}

int main()
{

    intLinkList<Distance> dlist;

    Distance d;
    d.setvalues(3,5);

    dlist.AddAtFront(d);

    d.setvalues(4,6);
    dlist.AddAtFront(d);

    d.setvalues(12,5);
    dlist.AddAtFront(d);

    dlist.printAll();



    intLinkList<string> list1;
    intLinkList<int> list2;

    list1.AddAtFront("word");
    list1.AddAtFront("some words");
    list1.AddAtFront("even more words");
    list1.printAll();

    list2.AddAtFront(54);
    list2.AddAtFront(22);
    list2.AddAtFront(45);
    list2.AddAtFront(54);
    list2.printAll();


    return 0;
}
