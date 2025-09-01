#include<iostream>
#include<string>
#include<stack>
using namespace std;

//DISPLAY IN ORIGINAL ORDER IN WHICH STACK ELEMENTS ARE PUSHED.
void display(stack<char>& st){
    if(st.size()==0) return ;
    char x = st.top();
    st.pop();
    display(st);
    cout<<x;
    st.push(x);
}


void removeConsecutiveDuplicates(string& s){
    stack<char>st;

    for(int i=0;i<s.length();i++){
        if(i==0) st.push(s[0]);
        else{
            if(s[i]!=st.top()) st.push(s[i]);
        }
    }
    display(st);

}

int main(){
    string s;
    cin>>s;
    removeConsecutiveDuplicates(s);


}