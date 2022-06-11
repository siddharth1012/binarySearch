#include <iostream>
using namespace std;

//forward declaration

int binarySearchIterative(int arr[], int low, int high, int data);

int binarySearchRecursive(int arr[], int low, int high, int data);

int main()
{
    int arr_size, data;
    
    cin >> arr_size;
    
    cout << endl;
    
    int arr[arr_size];
    
    for (int i=0;i<arr_size;i++)
        cin >> arr[i];
    
    cin >> data; 
    
    
    int index_data = binarySearchRecursive(arr, 0, arr_size-1, data);
    
    cout << "index of the data is: " << index_data;
    
    return 0;
}

int binarySearchIterative(int arr[], int low, int high, int data)
{
    while(low<=high)
    {
        int mid = low + (high - low)/2;
        
        if(arr[mid] == data)
            return mid;
        
        else if(arr[mid] > data)
            return high = mid + 1;
        else 
            low = mid + 1;
    }
    
    return -1;
}

int binarySearchRecursive(int arr[], int low, int high, int data)
{   
    if (low > high)
        return -1;
    
    int mid = low + (high-low)/2;
    
    if(arr[mid] == data)
        return mid;
    
    if(arr[mid]>data)
        return binarySearchRecursive(arr,low,mid-1,data);
    
    return binarySearchRecursive(arr,mid+1,high,data);
}

