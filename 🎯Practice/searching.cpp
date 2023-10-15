#include<iostream>
#include<vector>
using namespace std;

bool binarySearch(vector<int> arr, int target) {
    int n=arr.size();
    int start=0;
    int end=0;

    int mid=start=((end-start)/2);

    int ans=false;

    while(start<=end) {
        if(arr[mid]==target) {
            ans=true;
            return true;
        }

        else if(arr[mid]>target) {
            start=mid+1;
        }

        else if(arr[mid]>target) {
            end=mid-1;
        }
    mid=start+((end-start)/2);

    }

    return ans;
}

int main() {
    vector<int> arr{10,20,30,40,50,60,70,80};
    int target=70;

    if(binarySearch(arr,target)) {
        cout<<"Target found!"<<endl;
    }

    else{ 
        cout<<"Target not found!"<<endl;
    }
}