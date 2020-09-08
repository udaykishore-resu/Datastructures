#include <iostream>
using namespace std;

typedef struct node{
    char data;
    struct node *left;
    struct node *middle;
    struct node *right;
}Node;

Node *newNode(char data){
    Node *newN = new Node();
    newN->data=data;
    newN->left=NULL;
    newN->middle=NULL;
    newN->right=NULL;
    return newN;
}

void display(Node *root){
    if(root!=NULL){
        display(root->left);
        display(root->middle);
        cout<<root->data<<" ";
        display(root->right);
    }
    cout<<endl;
}
int main(){
    Node *root=newNode('A');
    root->left=newNode('B');
    root->middle=newNode('C');
    root->right=newNode('D');
    root->left->left=newNode('E');
    root->left->right=newNode('F');
    root->right->left=newNode('G');
    root->right->right=newNode('H');
    display(root);
    return 0;
}
