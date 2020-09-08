#include<iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}Node;

class Btree{
    public:
    Btree();
    ~Btree();

    void insert(int val);
    void destroy();
    void display();

    private:
    void insert(int, Node *);
    void destroy(Node *);
    void display(Node *);
    Node *root;
};

Btree::Btree(){
    root=NULL;
}

Btree::~Btree(){
    destroy();
}

void Btree::insert(int val){
    if(root==NULL){
        root=new Node;
        root->data=val;
        root->left=NULL;
        root->right=NULL;
    }
    else{
        insert(val,root);
    }
}

void Btree::insert(int val, Node *root){
    if(val<root->data){
        if(root->left==NULL){
            root->left=new Node;
            root->left->data=val;
            root->left->left=NULL;
            root->left->right=NULL;
        }
        else{
            insert(val,root->left);
        }
    }
    else{
        if(root->right==NULL){
            root->right=new Node;
            root->right->data=val;
            root->right->left=NULL;
            root->right->right=NULL;
        }
        else{
            insert(val,root->right);
        }
    }
}

void Btree::destroy(){
    destroy(root);
}

void Btree::destroy(Node *root){
    if(root!=NULL){
        destroy(root->left);
        destroy(root->right);
        delete root;
    }
}

void Btree::display(){
    display(root);
}

void Btree::display(Node *root){
    if(root!=NULL){
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}

int main(){
    Btree b;
    Btree c;
    b.insert(20);
    b.insert(10);
    b.insert(5);
    b.insert(15);
    b.insert(40);
    b.insert(45);
    b.insert(30); 
    b.display();
    cout<<endl;
    return 0;
}
