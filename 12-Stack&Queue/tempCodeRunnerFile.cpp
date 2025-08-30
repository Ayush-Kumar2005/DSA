void display(stack<int>& st){
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    display(st);
    cout<<x<<" ";
    st.push(x);
}