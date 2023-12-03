// #include<iostream>

// using namespace std;

// class Stack
// {
//     int* arr;
//     int size;
//     int top;

//     Stack(int size)
//     {
//         arr = new int[size];
//         this->size = size;
//         this -> top=-1;
//     }

//     //push ke condition
//     void push(int data){
//         //pehel check krenge ki stack full toh nhi hai
//         if(top ==size -1) {
//             cout << "stack is overflow"<<endl;
//             return;
//         }
//         else {
//             top ++;
//             arr[top] = data;
//         }
//     }

//     //pop ki conditon
//     void pop() {
//         //pehle check kregene ki stack jo hai khali toh nhi hai
//         if (top ==-1) {
//             cout << "stack is underflow" <<endl;
//         }

//         else {
//             top --;
//         }
//     }

//     //Empty ki condition
//     bool empty() {
//         if (top ==-1) {
//             return true;
//         }

//         else {
//             false;
//         }
//     }

//     //Top ki condition
//     int top() {
//         if (top ==-1) {
//             return -1;
//         }

//         else {
//             return arr[top];
//         }
//     }

//     //size ki condtion
//     int size() {
//         return top+1;
//     } 
// }

// void print() {
//     cout << "Top is: "<<top<<endl;
//     cout << "size is: "<<size<<endl;
//     if(empty()) {
//         cout << "Stack is empty"<<endl;
//     }
//     else { 
//         cout << "Stack is not empty"<<endl;
//     }

//     cout << "Stack: ";
//     for (int i=0; i<size(); i++) {
//         cout << arr[i] << " ";
//     }

// }

// int main() {
//     Stack st(8);

//     st.push(10);
//     st.print();

//     st.push(20);
//     st.print();

//     st.push(30);
//     st.print();

//     return 0;
// }

#include<iostream>
using namespace std;

void solve(stack<int> &st, int pos, int &ans) {
    //base condition hai
    if (pos==1) {
        ans = st.pop();
        return;
    }
    
    //1 case
    pos--;
    int temp = st.top();
    st.pop();

    //recursion call
    solve(st, pos, ans);

}

int mid(stack<int> &st) {
    //empty
    if (st.empty()) {
        return -1;
    }

    int size = st.size();
    int pos= 0;

    if( size & 1) {
        pos = (size/2)+1;
    }

    else {
        pos = size/2;
    }

    int ans = -1;
    solve (st, pos ,ans);
    return ans;
}

