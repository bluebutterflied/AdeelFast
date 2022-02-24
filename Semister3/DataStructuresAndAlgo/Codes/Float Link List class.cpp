#include <iostream>
using namespace std;

// Declare a structure for the list
struct nodeType
{
    float info;
    struct nodeType *link;
};

class FloatList
{
private:
    nodeType *head;	// List head pointer
public:
	FloatList(void)	// Constructor
	{ head = NULL; }
	~FloatList(void); // Destructor
	void appendNode(float);
	void insertNode(float);
	void deleteNode(float);
	void displayList(void);

};
void FloatList::appendNode(float num)
{
    nodeType *newNode, *nodePtr;
    // Allocate a new node & store num
    newNode = new nodeType;
    newNode->info = num;
    newNode->link = NULL;

    // If there are no nodes in the list
	// make newNode the first node
	if (head == NULL)
        head = newNode;
    else	// Otherwise, insert newNode at end
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        // Find the last node in the list
        while (nodePtr->link != NULL)
            nodePtr = nodePtr->link;
            // Insert newNode as the last node
        nodePtr->link = newNode;
    }
}

void FloatList::displayList(void)
{
      nodeType  *nodePtr;
      nodePtr = head;
      cout<<endl;
      while (nodePtr != NULL)
      {
           cout << nodePtr->info << endl;
           nodePtr = nodePtr->link;
       }
       cout<<endl;
}

void FloatList::insertNode(float num)
{
    nodeType *newNode, *nodePtr, *previousNode = NULL;

    // Allocate a new node & store Num
    newNode = new nodeType;
    newNode->info = num;
    // If there are no nodes in the list
    // make newNode the first node
    if (head == NULL)
    {
        head = newNode;
        newNode->link = NULL;
    }
    else	// Otherwise, insert newNode.
    {
        // Initialize nodePtr to head of list
        nodePtr = head;
        // Skip all nodes whose info member is less
        // than num.
        while (nodePtr->link != NULL && nodePtr->info < num)
        {
                previousNode = nodePtr;
                nodePtr = nodePtr->link;
		}
        // If the new mode is to be the 1st in the list,
        // insert it before all other nodes.
        if (previousNode == NULL)
		{
		    head = newNode;
		    newNode->link = nodePtr;
        }
        else
        {
            previousNode->link = newNode;
            newNode->link = nodePtr;
        }
    }
}

void FloatList::deleteNode(float num)
{
    nodeType *nodePtr, *previousNode;

    // If the list is empty, do nothing.
    if (head == NULL)
        return;
    // Determine if the first node is the one to be deleted
    if (head->info == num)
    {
        nodePtr = head->link;
        delete head;
        head = nodePtr;
    }
   	else
   	{
   	    // Initialize nodePtr to head of list
   	    nodePtr = head;
   	    // Skip all nodes whose info member is
   	    // not equal to num.
   	    while(nodePtr!= NULL && nodePtr->info != num)
   	    {
   	        previousNode = nodePtr;
            nodePtr = nodePtr->link;
        }
        //if end of linked list has been reached, and
        //info has not been found
        if(nodePtr == NULL)
            cout<<num<<" not found\n\n";

        // Else if the info has been found
        else
        {   // Link the previous node to the node after
            // nodePtr, then delete nodePtr.
            previousNode->link = nodePtr->link;
            delete nodePtr;
        }
	}
}

FloatList::~FloatList(void)
{
    nodeType *nodePtr, *linkNode;
    nodePtr = head;
	while (nodePtr != NULL)
	{
	    linkNode = nodePtr->link;
	    delete nodePtr;
		nodePtr = linkNode;
    }
}

int main()
{
    FloatList list;
    list.appendNode(4);
    list.appendNode(8);
    list.appendNode(12);
    list.appendNode(16);
    list.appendNode(20);
    list.appendNode(24);

    list.displayList();



    return 0;
}
