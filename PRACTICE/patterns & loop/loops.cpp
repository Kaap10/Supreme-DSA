#include<iostream>
using namespace std;

// int main() {
//     for(int i=0; i<4; i++) {
//         cout << "Kap10"<<i<<endl;;
//     }

//     return 0;
// }

//Pattern problem

// //pattern1 SQUARE 
// int main() {
//     int n;
//     cin >> n;

//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==0 || i==n-1) {
//                 cout << "* ";
//             }

//             else {
//                 if (j==0 || j==n-1) {
//                     cout << "* ";
//                 }
//                 else {
//                     cout << " ";
//                 }
//             }
//         }
//     cout <<endl;
//     }
// return 0;
// // }

// int main() {
//     int n=5;

//     for(int i=0; i<n; i++) {
//         for(int j=0; j<(i+1); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int n=5;

//     for (int i=0; i<n; i++) {
//         for (int j=0; j<(n-i); j++) {
//             cout << "* ";

//         }
//         cout <<endl;
//     } 
//     return 0;
// }

// int main() {
//     int n=5;

//     for (int i=0; i< n; i++) {
//         for (int j=0; j<n; j++) {
//             if (i==0 || i==n-1) {
//                 cout << "* ";
//             }
//             else { 
//                 if( j==0 || j==n-1) {
//                     cout << "* ";
//                 }
//                 else {
//                     cout << "  ";
                
//                 }
//             }

//         }
//             cout << endl;
//     }
//     return 0;

// }

int main() {
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i-1); j++) {
            cout << " ";
        }

        for (int j=0; j<(i+1); j++) {
            cout << "* ";
        }
        cout <<endl;
    }
    return 0;
}