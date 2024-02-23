#include<iostream>
using namespace std;

class Node 
{
    
    public:
    int data;
    Node* next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class Stack
{
    Node *top;
    int size;

    public:

    Stack()
    {
        top = NULL;
        size = 0;
    }

    //push
    void push(int value){
        Node *temp = new Node(value);
        if(temp == NULL){
            cout<<"Heap OverFlow\n";
        }
        temp->next =top;
        top = temp;
        size++;
        cout<<"Pushed "<<value<<" in the Stack\n";
    }
    //pop
    void pop()
    {
        if(top == NULL){
            cout<<"Stack underflow";
        }
        else{
            top = top->next;
            cout<<"Popped "<<top->data<<" from the stack\n";
        }
    }
    //peek
    int peek(){
        if(top == NULL)
        return -1;
        else
        return top->data;

    }
    //IsEmpty
    int IsEmpty(){
        return top==NULL;
    }
    //IsSize
    int IsSize(){
        return size;
    }

};



int main()
{
    Stack S;
    S.push(34);
    S.push(23);
    S.push(65);
    S.push(76);
    S.pop();
    cout<<S.peek();
    cout<<S.IsEmpty();
    cout<<S.IsSize();
}