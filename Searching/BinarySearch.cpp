#include <iostream>
#include <string>
using namespace std;
int binarySearch(int arr[], int i, int j, int key)  
{  
    int mid;  
    if(j >= i) {     
        mid = (i + j)/2;  
        if(arr[mid] == key)  
        {  
            return mid+1;  
        }  
        else if(arr[mid] < key) {  
            return binarySearch(arr,mid+1,j,key);  
        }  
        else {  
            return binarySearch(arr,i,mid-1,key);  
        }  
    }  
    return -1;   
}   
int main ()  
{  
    int arr[] = {5,8,10,13,21,23,25,43,54,75};  
    int key, location=-1;  
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"The input array is: ";
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the key that is to be searched:"; 
    cin>>key;  
    location = binarySearch(arr, 0, len, key);  
    if(location != -1)  {  
        cout<<"Key found at location "<<location<<endl; 
    }  
    else   {  
        cout<<"Requested key not found"<<endl;
    }  
}
