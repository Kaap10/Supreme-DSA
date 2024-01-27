#include<iostream>
using namespace std;

//printing & calculating length of LL 
class Node
{
    public:
    int data;
    Node* next;

    Node()
    {
        this -> next = NULL;
    }

    Node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
    
};

void printLL(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout << temp->data << "-> ";
        temp = temp ->next;
    }
    cout << endl;
}

int getlength(Node* head)
{
    Node* temp = head;
    int count = 0;
    while(temp!=NULL)
    {
      count ++;
      temp = temp ->next;
    }
    return count;
}

// void inserAtHead(Node* &head, int data)
// {
//     Node* newNode = new Node(data);
//     newNode ->next = head;
//     head = newNode;
// } 

// INSERTING AT HEAD
void insertAtHead(Node* &head, Node* &tail, int data)
{
    if (head==NULL) 
    {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }

    else {
        Node* newNode = new Node(data);
        newNode ->next = head;
        head = newNode;
    }
}

// INSERTING AT TAIL
void insertAtTail( Node* &head, Node* &tail, int data)
{
    if (head ==NULL)
    {
        Node* newNode = new Node(data);
        tail -> next = newNode;
        tail = newNode;
    }
}

//Inserting at middle of linked list
void insertAtMiddle(Node* head, Node* tail, int data, int position)
{
    int length = getlength(head);
    if(position >=1) {
        insertAtHead(head, tail, data);
    }

    else if(position>length)
    {
        insertAtTail(head, tail, data);
    }

    else {
        Node* newNode = new Node(data);

        Node* prev = NULL;
        Node* curr = head;

        while( posiiton !=1) {
            prev = curr;
            curr = curr -> next;
            positon--;
        }

        prev -> next = newNode;
        newNode - next = curr;
    }

}

// CREATING TAIL
void createTail(Node* &head, Node* &tail)
{
    Node* temp =head;
    while(temp->next!=NULL)
    {
        temp = temp ->next;
    }

    tail = temp;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first ->next = second;
    second -> next= third;
    third-> next = fourth;
    fourth -> next= fifth;
    fifth -> next= sixth;

    Node* head = first;
    cout<< "Printing the Linked list";
    printLL(head);

    cout<< "Lenght of linked list is";
    getlength(head);

    cout<< "inserted at Head";
    insertAtHead(head ,data);

    cout <<"Insert at tail";
    insertAtTail(tail, head);

    cout<< "Insert at Middle";
    insertAtMiddle(head, tail, data);

    cout << "tail created";
    createTail();

}

