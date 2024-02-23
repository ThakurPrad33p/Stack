#include<iostream>
using namespace std;


class Stack{

    int *arr;
    int size;
    int top;

    public:
    Stack(int s){
        size = s;
        top = -1;
        arr = new int[s];
    }



//push 
void push(int value){
    if(top==size+1){
        cout<<"Stack is overflow"<<endl;
    }
    else{
        top++;
        arr[top]= value;
        cout<<"Pushed "<<arr[top]<<" from the stack"<<endl;
    }
}
//pop
void pop(){
    if(top==-1){
        cout<<"Stack is underflow"<<endl;
    }
    else{
        cout<<"Popped "<<arr[top]<<" from the stack"<<endl;
        top--;
    }
}
//peek
int peek(){
    if(top==-1){
        return -1;
    }
    else{
        return arr[top];
    }
}
//isEmpty
bool isEmpty(){
    return top==-1;
}
//size
int Size(){
    return top+1;
}

};

int main(){
    Stack S(5);
    S.push(28);
    S.push(10);
    S.push(5);
    S.push(8);
    cout<<S.Size()<<endl;
    S.pop();
    S.pop();
    S.pop();
    S.pop();
    cout<<S.Size()<<endl;

    cout<<S.peek()<<endl;
    cout<<S.isEmpty()<<endl;
    cout<<S.Size()<<endl;
}