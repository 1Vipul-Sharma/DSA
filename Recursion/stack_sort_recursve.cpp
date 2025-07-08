#include <bits/stdc++.h>
using namespace std;

void insert_sorted(stack<int>& st, int key) {
    if(st.size()==0 || st.top() < key) {    
        st.push(key);
        return;
    }
    int temp = st.top();
    st.pop();
    insert_sorted(st, key);
    st.push(temp);
    return;
}

void sort_stack(stack<int>& st) {
    if(st.size() <= 1) return;
    int temp = st.top();
    st.pop();
    sort_stack(st);
    insert_sorted(st, temp);
}
int main() {
    stack<int> st;

    // Push elements
    st.push(20);
    st.push(10);
    st.push(30);

    sort_stack(st);
    cout << "Sorted Stack: ";
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}