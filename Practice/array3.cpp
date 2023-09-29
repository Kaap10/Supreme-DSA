#include<iostream>
#include<limits.h>
using namespace std;

// int main() {
//     int arr[3][3];
//     int row=3;
//     int col=3;

//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout<<"Row index: "<<i<<" Column index: "<<j<<endl;
//         }
//         cout << endl;
//     }
//     cout << "Printing row wise: "<<endl;
//     printArray(arr,row,col);

//     return 0;
// }

// [2D ARRAY]
// void printArray1(int arr[][4],int row, int col) {
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout<<arr[i][j]<< " ";
//         }
//         cout <<endl;
//     }
// }

// void printArray2(int arr[][4], int row, int col) {
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << arr[j][i]<< " ";
//         }
//         cout << endl;
//     }
// }




// int main() {
//     int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//     int row=3;
//     int col=4;
//     cout <<"Printitng Row Size: "<<endl;
//     printArray1(arr,row,col);
//     cout<<"Printing Col Size: "<<endl;
//     printArray2(arr,row,col);

//     return 0;

// }

//  [TAKING INPUT IN 2D ARRAY]
// void printArray(int arr[][3], int row, int col) {
//     for (int  i=0; i< row; i++) {
//         for (int j=0; j<col; j++) {
//             cout<<arr[i][j]<<" ";
//         }

//         cout << endl;
//     }
// }

// int main() {
//     int arr[4][3];
//     int row=4;
//     int col=3;

//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             cout << "Row index: "<< " Column index: "<<j<<endl;
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<"Printing row wise: "<<endl;
//     printArray(arr,row,col);

//     return 0;
// }

//[ MIN & MAX in a Array]
// #include<limits.h>

// void findMax( int arr[][3], int row, int col) {
//     int max = INT_MIN;
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if(arr[i][j]>max) {
//                 max=arr[i][j];
//             }
//         }
//     }
//     cout << "Max is: "<<max<<endl;
// }

// void findMin( int arr[][3], int row, int col) {
//     int min = INT_MAX;
//     for (int i=0; i<row; i++) {
//         for (int j=0; j<col; j++) {
//             if (arr[i][j]<min) {
//                 min=arr[i][j];
//             }

//         }
//     }
//     cout << "Min is: "<<min<<endl;  
// }



// int main() {
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,21}};
//     int row=3;
//     int col=3;

//     findMax(arr,row,col);
//     findMin(arr,row,col);

//     return 0;
// }

// [ PRINT ROW WISE & COL WISE SUM in Array]
