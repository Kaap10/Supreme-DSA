#include<iostream>
using namespace std;

// int main() {
//     int n=4;

//     for(int row=0; row<n; row++) {
//         for (int col=0; col<n; col++) {
//             cout<< "* ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }

// int main() {
//     int n=3;

//     for (int row=0; row<n; row++) {
//         for (int col=0; col<(n+2); col++) {
//             cout <<"* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }    

// int main() {
//     for (int row=0; row<n; row++) {
//         for (int col=0; col<n; col++) {
//             if(row==0 || row==n-1) {
//                 cout<< "* ";
//             }
//             else{
                
//                     if(col==0 || col == n-1) {
//                         cout<< "* ";
//                     }
//                     else {
//                         cout << " "
//                     }
//                 }
//             }
//         cout <<endl;

//         }
//     return 0;
// }

// int main() {
//     int n=5;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<(i+1); j++) {
//             cout <<"* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int n=5;

//     for (int i=0; i<n; i++) {
//         for (int j=0; j<(n-i-1); j++) {
//             cout << " ";
//         }
//         for (int j=0; j<(i+1); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main() {
//     int n=5;
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<i; j++) {
//             cout << " ";
//         }
//         for (int j=0; j<(n-i); j++) {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

int main() {
    int num;
    cin>> num;
    int n = num/2;

    for (int i=0; i<n; i++) {
        for (int j=0; j<(n-i-1); j++) {
            cout << " ";
        }
        for (int j=0; j<(i+1); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int j=0; j<(n-i); j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}