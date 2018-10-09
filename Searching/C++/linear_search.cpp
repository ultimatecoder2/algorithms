#include<iostream>
using namespace std;

int linearSearch(int arr[], int n,int el) {
    for(int i=0;i<n;i++){
        if(arr[i]==el) return i;
    }
    return -1;
}
void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main() {
    int size,el;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    input(arr,size);
    cout<<"Enter the element to find"<<endl;
    cin>>el;
    int findIndex = linearSearch(arr,size,el);
    findIndex==-1?(cout<<"Element not found"<<endl):(cout<<"Element found at index "<<findIndex<<endl);
    return 0;
}
