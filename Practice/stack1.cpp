// #include<iostream>
// #include<stack>
// using namespace std;

// int main() {
//     stack <int> st;

//     st.push(1);
//     st.push(2);
//     st.push(3);

//     cout << "size of stack: "<< st.size()<<endl;

//     st.pop();

//     if(st.empty()) {
//         cout << "Stack is empty"<<endl;
//     }

//     else {
//         cout << "Stack is not empty"<<endl;
//     }

//     cout<< "Top element: "<<st.top()<<endl;

//     return 0;

// }

//IMPLEMENTATION OF STACK USING DYNAMIC ARRAY
#include<iostream>
using namespace std;

class Stack
{
    public: 
    int* arr;
    int size;
    int top;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        this-> top=-1;
    }

    void push(int data) {
        if( top == size -1) {
            cout << "stack is overflow"<<endl;
            return ;
        }

        else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "stack is underflow"<<endl;
            return;
        }

        else{
            top--;
        }
    }

    bool isEmpty() {
        if (top ==-1) {
            return true;
        }

        else {
            return false;
        }
    }

    int getTop() {
        if (top == -1) {
            return -1;
        }

        else {
            return arr[top];
        }
    }
}

