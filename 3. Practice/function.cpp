// // // #include<iostream>
// // // using namespace std;

// // // // // void greet()
// // // // // { 
// // // // //     cout <<"hi";
// // // // // }

// // // // // int main() {
// // // // //     greet();
// // // // // }

// // // // int sum(int sum1, int sum2, int sum3) {
// // // //     int result = (sum1+ sum2+sum3);
// // // //     // return result;
// // // // }

// // // // int main() {
// // // //     int finalresult = sum(1,2,3);
// // // //     cout<< finalresult;

// // // //     return 0;
// // // // }

// // // void printArea(int rad) {
// // //     int area = 3.14*rad*rad;
// // //     cout << area;
// // // }

// // // int main() {
// // //     printArea(3);

// // //     return 0; 
// // // }

// // //Function to find factorial of a number
// // #include<iostream>
// // using namespace std;

// // void factorial(int num) {
// //     int fact =1;
// //     for (int i=num; i>0; i--) {
// //         fact = fact*i;

// //         cout << fact;
// //     }
// // }
 
// // int main() {
// //         factorial(2);

// //         return 0;

// // }

// #include<iostream>
// using namespace std;

// void printMax(int num1, int num2, int num3) {
//     int ans = max(num1,num2);
//     int finalAns = max(ans, num3);

//     cout << finalAns;
// }

// int main() {
//     printMax(1,2,3);
//     cout<<endl;
//     printMax(5,78,21);

//     return 0;
// }

#include<iostream>
using namespace std;

int printCount(int num) {
    for (int i=1; i<=num; i++) {
        cout<<i ;
    }
}

int main() {
    printCount(4);
}