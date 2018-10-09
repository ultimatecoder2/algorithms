#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) { 
   int i, j; 
   bool isSwapped; 
   for (i = 0; i < n-1; i++) 
   { 
     isSwapped = false; 
     for (j = 0; j < n-i-1; j++) 
     { 
        if (arr[j] > arr[j+1]) 
        { 
        //Swapping the numbers
           int temp = arr[j];
           arr[j] = arr[j+1];
           arr[j+1] = temp;
           isSwapped = true; 
        } 
     } 
  
     if (isSwapped == false) 
        break; 
   } 
} 
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

  int main() { 
    int size;
    cout<<"Enter the array size"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements"<<endl;  
    input(arr,size);
    bubbleSort(arr,size);
    output(arr,size);
    return 0; 
} 