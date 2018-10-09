
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

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main() {
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;
    input(arr,size);
    insertionSort(arr,size);
    output(arr,size);
    return 0;
}
