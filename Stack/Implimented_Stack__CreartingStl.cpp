#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        arr = new int[size];
        top = -1;
        this->size = size;
    }

    void push(int d){
        if(top == size-1) {
            cout<<"Stack Overflow for " << d << endl;
            return;
        }
        top++;
        cout<<"Index at : " << top << "  Data  is "<<d<<endl;
        arr[top] = d;
    }
    
    void pop(){
        top--;
    }
    int getSize(){
        // We Already created in Data Members
        // return this->size;   ==> We Don't return this because if we return this and in later we update or insert element then it do not change the size 
        // return this->size;   --> we do not return this because if we return this this will ret8urn stack size ehick is 5
        return this->top+1;
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    int topp(){
        return arr[top];
    }
};
int main() {
    // we use new keyward and new return pointer
    // so st is pointer
    Stack *st = new Stack(5);

    // instrtion
    st->push(3);
    st->push(4); 
    st->push(5);
    // st->push(6); 
    // st->push(7);
    // st->push(8); 



    // Size 
    cout<< st->getSize()<<endl;
    // Top
    cout<<st->topp()<<endl;
    return 0;
}