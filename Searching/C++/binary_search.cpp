#include<iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = (l+r)/2;
        
        if (arr[mid] == x) return mid;
 
        if (arr[mid] > x) return binarySearch(arr, l, mid-1, x);
        
        return binarySearch(arr, mid+1, r, x);
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
    int findIndex = binarySearch(arr,0,size-1,el);
    findIndex==-1?(cout<<"Element not found"<<endl):(cout<<"Element found at index "<<findIndex<<endl);
    return 0;
}

