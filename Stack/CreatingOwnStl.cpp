#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // Push
    void push(int data){
        top++;
        arr[top] = data;
    }

    // Pop
    void pop(){
        arr[top] = -1;
        top--;
    }
    // size
    int getSize(){
        return this->top + 1;
    }
    // top
    int topp(){
        return arr[top];
    }
    // is Empty or Not
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};

int main() {
    // Creating Stack With  Size 5
    Stack *st = new Stack(5);
    st->push(6);
    st->push(7);
    st->push(8);
    cout<<st->getSize()<<endl;
    // cout<<st->topp()<<endl;
    // cout<<st->isEmpty()<<endl;
    return 0;
}