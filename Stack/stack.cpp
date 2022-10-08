#include<iostream>
// Header File
#include<stack>
using namespace std;
int main() {
    // Creation
    stack<int> st;

    // insertion
    st.push(5);
    st.push(7);
    st.push(3);

    // Size
    cout<<st.size()<<endl;

    // check Empty Or Not
    cout<<st.empty()<<endl;
    // 0 -> false 1 -> true
    if(st.empty()) cout<< "Yes"<<endl;
    else cout<<"NO"<<endl;


    // Top element
    cout<<st.top()<<endl;

    //removal top Element
    st.pop();
    cout<<st.top()<<endl;

    
    return 0;
}