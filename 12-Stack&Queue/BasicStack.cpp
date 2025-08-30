#include <iostream>
#include <stack>
using namespace std;

void print(stack<int>& st) {
    while (st.size()>0) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
// NOTE: -  When it is used , it prints the complete stack element in reverse order but problem is that the stack becomes empty.


void printAndRestoreElement(stack<int>& st) {   // pass by reference

    stack<int>temp;
    while (st.size()>0) {
        cout << st.top() << " ";
        int x = st.top();
        temp.push(x);
        st.pop();  // removes elements from original stack
    }
    cout << endl;
    // cout << "Total elements in stack after printing: " << st.size()<<endl;
    // cout << "Total elements in temp after printing: " << temp.size()<<endl;
    
    while(temp.size()>0){
        int y = temp.top();
        st.push(y);
        temp.pop();
    }
    // cout << "Total elements in stack after printing: " << st.size()<<endl;
    // cout << "Total elements in temp after printing: " << temp.size()<<endl;
    
    
}

void ReverseInSameStack(stack<int>& st){
    stack<int>gt;
    stack<int>rt;
    printAndRestoreElement(st);
    
    while(st.size()>0){
        int x = st.top();
        st.pop();
        gt.push(x);
    }
    
    while(gt.size()>0){
        int y = gt.top();
        gt.pop();
        rt.push(y);
    }
    
    while(rt.size()>0){
        int z = rt.top();
        rt.pop();
        st.push(z);
    }
    
    printAndRestoreElement(st);
}

void copyInAnotherStackInSameOrder(stack<int>& st){
    stack<int>gt;  //copy elements inside this
    stack<int>temp;
    
    cout<<"st: "<<endl;
    printAndRestoreElement(st);
    
    while(st.size()>0){
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    
    while(temp.size()>0){
        int y = temp.top();
        temp.pop();
        gt.push(y);
    }
    
    cout<<"gt: " <<endl;
    printAndRestoreElement(gt);
}

void pushElementAtBottom(stack<int>& st , int val) {

    cout<<"Before Pushing: ";
    printAndRestoreElement(st);
    
    stack<int>temp;
    while (st.size()>0) {
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    temp.push(val);
    while(temp.size()>0){
        int y = temp.top();
        st.push(y);
        temp.pop();
    }
    
    cout<<"After Pushing: ";
    printAndRestoreElement(st);
}

//PUSH ELEMENT AT PARTICULAR INDEX
void pushElementAtIndex(stack<int>& st , int idx , int val) {

    cout<<"Before Pushing: ";
    printAndRestoreElement(st);
    
    stack<int>temp;
    while (st.size()>idx) {
        int x = st.top();
        temp.push(x);
        st.pop();
    }
    temp.push(val);
    while(temp.size()>0){
        int y = temp.top();
        st.push(y);
        temp.pop();
    }
    
    cout<<"After Pushing: ";
    printAndRestoreElement(st);
}

// DISPLAY IN REVERSE ORDER
void displayRev(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    cout<<x<<" ";
    st.pop();
    displayRev(st);
    st.push(x);
}

//DISPLAY IN ORIGINAL ORDER IN WHICH STACK ELEMENTS ARE PUSHED.
void display(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}

void pushElementAtBottomRec(stack<int>& st , int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    pushElementAtBottomRec(st , val);
    st.push(x);
}

//REVERSING THE STACK
void revStack(stack<int>& st){
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    revStack(st);
    pushElementAtBottomRec(st , x);
}



int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    display(st);
    cout<<endl;
    revStack(st);
    display(st);

}
