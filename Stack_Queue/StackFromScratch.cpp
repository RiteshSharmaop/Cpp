#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int top;
    int size;

    // initialise constructor
    Stack(int size){
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    void push(int d){
        // first check if array is full or not 
        // if full then
        if(top == size - 1){
            cout<< "Stack Overflow for " << d<<endl;
            return;
        }
        // otherwise
        top++;
        arr[top] = d;
    }
    void pop(){
        // first check if array is Empty or not
        // if empty then 
        if(top == -1 ){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        // otherwise
        top--;
    }
    int getTop(){
        // if top equal to -1 then we dont have any element in array
        // otherwise we have 
        if(top != -1)
            return arr[top];
        else return -1;
    }

    int getSize(){
        // it returns numbeer of Element Present in stack
        return  top+1;
    }
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};
int main(){
    Stack* st = new Stack(5);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(5);
    // st->push(6); 


    st->pop();
    st->pop();
    st->pop();
    st->pop();
    st->pop();
    // st->pop();
    cout<<st->getSize()<<endl;
    cout<<st->isEmpty()<<endl;
    cout<<st->getTop()<<endl;
    return 0;
}