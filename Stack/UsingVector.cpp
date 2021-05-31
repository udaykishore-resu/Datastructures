#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;

class stack{
    vector<int> v;
    int top;
    int capacity{10};
    public:
    stack();
    ~stack();
    void push(int);
    void pop();
    bool isFull();
    bool isEmpty();
};

stack::stack(){
    v.resize(capacity);
    top=-1;
}

stack::~stack(){
    v.clear();
    v.shrink_to_fit();
}

void stack::push(int val){
    if(isFull()){
        cout<<"stack is full"<<endl;
        exit(1);
    }
    v.push_back(val);
    top++;
}

void stack::pop(){
    if(isEmpty()){
        cout<<"stack is empty"<<endl;
        exit(1);
    }
    v.pop_back();
    top--;
}

bool stack::isEmpty(){
    return top==-1;
}

bool stack::isFull(){
    return top==capacity-1;
}

int main()
{
    stack pt;
 
    pt.push(1);
    pt.push(2);
 
    pt.pop();
    pt.pop();
 
    pt.push(3);
    pt.pop();
 
    if (pt.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
 
    return 0;
}