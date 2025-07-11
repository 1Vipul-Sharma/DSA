#include <bits/stdc++.h>
using namespace std;


void solve(stack<int>& st,int no) {
    if(no==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, no-1);
    st.push(temp);
    return;
}

int main() {
    stack<int> st;
    // Push elements
    st.push(20);
    st.push(10);
    st.push(30);
    // st.push(40);
    st.push(50);
    st.push(60);
    cout<< "Original Stack: 60 50 30 10 20";
    
    int no = st.size()/2 + 1;
    solve(st , no);
    cout <<endl;
    cout << "After middle element Deleted Stack: ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}