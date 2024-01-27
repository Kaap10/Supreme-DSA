// // //SIMPLE CODES
// // // void deleteHead (Ndoe* &head, Node* &tail)
// // // {
// // //     Node* temp = head;
// // //     head = temp->next;
// // //     temp ->next = NULL
// // //     delete temp;
// // // }

// // //NODE ADD CORNER CASES OF (i) Empty list & (ii) Single element
// // void deletefromHead(Node8 &head, Node* &tail)
// // {
// //     if(head ==NULL) {
// //         cout<< "No element present";
// //         return;
// //     }

// //     if (head == tail) {
// //         Node* temp =head;
// //         delete temp;

// //         head->next = NULL;
// //         tail->next = NULL;
// //     }

// //     Node* temp = head;
// //     // temp ->next = head;
// //     head = temp ->next;
// //     temp ->next = NULL;
// //     delete temp;
// // }

// // // DELETE NODE FROM TAIL
// // void deletefromTail(Node* &head, Node* &tail)
// // {
// //     if (head==NULL) {
// //         cout << "No element present";
// //         return;
// //     }

// //     if (head == tail) {
// //         Node* temp = head;
// //         delete temp;
// //         head -> next =NULL;
// //         tail -> next =NULL;
// //     }
// //     Node* prev =head;
// //     while(prev-> next !=NULL) {
// //         prev = prev ->next;
// //     }
// //     prev -> next = NULL;
// //     delete tail;
// //     tail = prev;
// // }

// //DELETE FROM ANY POSITON

// void deletefromPos( Node* head, Node* tail, int position) {
//     if (head == NULL) {
//         cout << "No element";
//         return;
//     }

//     if (head == tail) {
//         Node* temp = head;
//         delete temp;
//         head -> next = NULL;
//         tail -> next = NULL;
//     }

//     if (position==1) {
//         deletefromHead(head, tail);
//     }

//     if (position == getlength(position)) {
//         deletefromTail(head, tail)
//     }

//     Node* prev = NULL;
//     Node* curr = head;

//     while(position!=1) {
//         prev = curr;
//         curr = curr -> next;
//         position--;
//     }

//     prev -> next = curr => next;
//     curr -> next = NULL;
//     delete curr;
// }

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this -> prev = NULL;
        this -> next = NULL;
    }

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
}:

void printLL(Node* &head) {
    Node* temp = head;

    while(temp!=NULL) {
        cout << temp-> data<<" ";
        temp = temp->next;
    }
    cout << endl;
}

int findlength(Node* &head) {
    Node* temp = head;

}