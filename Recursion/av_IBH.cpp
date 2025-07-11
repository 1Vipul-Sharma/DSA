//  1 to n ========================
// #include <bits/stdc++.h>
// using namespace std;

// void print(int n) {
//     if(n<1) return ;
//     print(n-1);
//     cout<<n<<" ";
//     return;
// }
// int main() {
    
//     int n;
//     cin>>n;
//     print(n);

//     return 0;
// }

// n to 1 ========================
// #include <bits/stdc++.h>
// using namespace std;

// void print(int n) {
//     if(n<1) return ;
//     cout<<n<<" ";
//     print(n-1);
//     return;
// }
// int main() {
//     // your code here
//     int n;
//     cin>>n;
//     print(n);
//     return 0;
// }


// factorial of a number ========================

#include <bits/stdc++.h>
using namespace std;

int print_factorial(int n) {
    if(n==0 || n==1)  
        return 1;
    return n*print_factorial(n-1);
}

int main() {
    int n;
    cout<<"Enter a number to find factorial: ";  // 5
    cin>>n;
    cout<<print_factorial(n);
    return 0;
}