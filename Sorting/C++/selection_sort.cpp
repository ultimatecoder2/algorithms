#include<iostream>
using namespace std;

void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
void output(int arr[],int size){
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(int arr[], int n) {
    int i, j, index;
    for (i = 0; i < n-1; i++)
    {
        index = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[index]) {
                index = j;
            }
        
        
        swap(&arr[index], &arr[i]);
    }
}

int main() {
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    input(arr,size);
    selectionSort(arr,size);
    output(arr,size);
    return 0;
}
