#include<iostream>
#include<string>
using namespace std;

int main(){
    int arr[]={21,43,23,54,75,13,5,8,25,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key,loc=0;
    cin>>key;
    for(int i=0;i<len;i++){
        if(arr[i]==key){
            loc=i;
            break;
        }
    }
    if(loc!=0){
        cout<<"item found at "<<loc<<"th position"<<endl;
    }
    else{
        cout<<"item is not found in the array"<<endl;
    }
}
