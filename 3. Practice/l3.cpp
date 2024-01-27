// // // // // REVERSE THE LINKED LIST

// // // // // (1) Iterative approach
// // // // class Solution {
// // // //     public:

// // // //     Node* reverseList(Node* head) {
// // // //         Node* prev = NULL;
// // // //         Node* curr = head;

// // // //         while(curr!=NULL) {
// // // //             Node* newNode= curr -> next;
// // // //             curr -> next = NULL;
// // // //             prev = curr;
// // // //             curr = newNode;
        
// // // //         }
// // // //         return prev;
// // // //     }
// // // // }

// // // // RECURSIVE APPROACH
// // // class Solution {
// // //     public:
// // //     Node* reverseList(Node* prev, Node* curr) {
// // //         //BASE CASE
// // //         if(curr == NULL) {
// // //             return prev;
// // //         }

// // //         //ek case solve solve krna hai
// // //         Node* nextNode = curr -> next;
// // //         curr -> next = prev;
// // //         prev = curr;
// // //         curr = nextNode;

// // //         reverseList(prev, curr);
// // //     }

// // //     Node* reverse(Node* head) {
// // //         Node* prev = NULL;
// // //         Node* curr = head;

// // //         return reverse(prev, curr);
// // //     }
// // // }

// // // FIND MIDDLE OF ELEMENT IN A LIST
// // class Solution {
// //     public:
// //     // list ki length nikal liya
// //     int getLength(Node* head) {
// //         int count = 0;
// //         Node* temp = head;

// //         while(Node!=NULL) {
// //             count ++;
// //             temp = temp-> next;
// //         }

// //         return count;
// //     }

// //     Node* middle( Node* head) {
// //         int length = getLength(head);
// //         int posiiton = (length/2) +1;
// //         int currPos =1;
// //         Node* temp = head;

// //         while(currPos != NULL) {
// //             currPos++;
// //             temp = temp->next;
// //         }

// //         return temp;
// //     }


// // }; 

// // MIDDLE ELEMENT KO hum Fast & Slow algorithm (hare and tortoise) se krenge
// // class Solution{
// //     public:
// //     Node* middle(Node* head) {
// //         Node* slow = head;
// //         Node* fast = head;

// //         while(fast!=NULL) {
// //             fast = fast ->next;
// //             if (fast!= NULL) {
// //                 fast = fast -> next;

// //                 slow = slow ->next;
// //             }
// //         }
// //     } return slow;
// // };

// //PALINDROME 
// #include<iostream>
// using namespace std;
// class Solution{
//     public:

//     int getMiddle(Node* head) {
//         Node* slow = head;
//         Node* fast = head;

//         while(fast!=NULL) {
//             fast = fast -> next;
//             if (fast!= NULL) {
//                 fast = fast -> NULL;

//                 slow = slow -> next;                
//             }
//         }
//     } return slow;

//     int Reverse(Node* prev, Node* curr) {
//         //base cas
//         if(curr==NULL) {
//             return false;
//         }

//         Node* nextNode = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = nextNode;
//     }
//     return true;

//    bool comparelist(Node* head, Node* head2) {
//         while(head2!=NULL) {
//             if(head ->val != head2 -> val) {
//                 return false;
//             }

//             else{
//                 head = head->next;
//                 head2 = head2 ->next;
//             }
//             }
//         } return true;
//    }
   
//    bool isPlaindrome(Node* head, Node* head2) {
//     Node* midNode = getMiddle(head);
//     Node* head2 = midNode -> next;
//     midNode -> next = NULL;

//     Node* prev = NULL;
//     Node* curr = head2;
//     head2 = Reverse(prev, curr);

//     bool ans = comparelist(head, head2);
//     return ans;
//    }

// };

class solution{
    public:

    bool cycle(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while(fast != NULL) {
            fast = fast -> next;
            if (fast != NULL) {
                fast = fast -> next;

                slow = slow -> next;

                if (slow == fast) {
                    return true;
                }
            }
        } return false;
    }
}