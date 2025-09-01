#include<iostream>
#include<string>
#include<stack>
using namespace std;

void balancedBrackets(string& s){
    stack<char>st;

    if(s.length() %2 != 0){
        cout<<"False"<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        if(s[i]== '('){
            st.push('(');
        }
        else if(s[i]==')'){
            if(st.size()==0){
                cout<<"False"<<endl;
                return;
            }
            else{
                st.pop();
            }
        }
    }

    if(st.size()==0){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
}

int main(){
    string s;
    cin>>s;
    balancedBrackets(s);


}