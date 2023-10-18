#include<iostream>
using namespace std;

// // Find unique element
// int getUnique(int arr[],int size){
//     int ans = 0;
//     for(int i=0;i<size;i++){
//         ans ^=arr[i];
//     }
//     return ans;
// }

//[ PRINTING DOUBLETS]
// int main(){
//     int arr[]={2,10,11,13,10,2,16,13,16};
//     int n=9;

//     // calling method
//     int finalAns = getUnique(arr,n);
//     cout<<"Unique element: "<<finalAns;

//     return 0;
// }

// 

//[ PRINTING TRIPLETS]
// void PrintTriplets(int arr[], int n) {
//     for (int i=0; i<n; i++) {
//         for (int j=0; j<n; j++) {
//             for (int k=0; k<n; k++) {
//                 cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
//             }
//         }
//     }
// }

// int main() {
//     int arr[]={1,2,3};
//     int n=3;

//     PrintTriplets(arr,n);
//     return 0;
// }

void sortZeroOne(int arr[], int n) {
    int zeroCount=0;
    int oneCount=0;

    for (int i=0; i<n; i++) {
        if (arr[i]==0) {
            zeroCount++;
        }
        else {
            oneCount++;
        }
    }

    int i=0;
    while (zeroCount--) {
        arr[i]=0;
        i++;
    }
    while (oneCount--) {
        arr[i]=0;
        i++;
    }
}

void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) {
        cout << arr[i] <<" ";
    }
}




int main() {
        int arr[] =  {0,1,1,0,0,1};
        int n=6;

        sortZeroOne(arr,n);
        printArray(arr,n);

        return 0;
}