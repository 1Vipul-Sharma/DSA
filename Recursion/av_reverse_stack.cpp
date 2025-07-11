#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>& st, int key) {
    if(st.size()==0 ) {
        st.push(key);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st, key);
    st.push(temp);
}

void reverse(stack<int>& st) {
    if(st.size() ==1) return;
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st,temp);
}
int main() {
    stack<int> st;
    for(int i=1; i<=5; i++) {
        st.push(i);
    }
    cout<<"5 4 3 2 1\n";
    reverse(st);
    while(!st.empty()) {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}