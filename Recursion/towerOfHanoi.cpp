// Try to think this program same like IBH
// we only have to adjust nth disk if all other n-1 disks are placed correctly.

#include <bits/stdc++.h>
using namespace std;

void solve(int n, char s, char h, char d) {
    if(n==0) return;
    solve(n-1, s, d, h);
    cout<<"Move disk "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(n-1, h, s, d);
    return;
}
int main() {
    int n;
    cout<<"Enter the number of disks: ";  // Tower of Hanoi problem has n disks. For example, if n=3, then there are three disks.
    // You can change the source, auxiliary, and destination rods as per your requirement.
    // Here, we are using 'S', 'H', and 'D' as source, auxiliary, and destination rods respectively.
    cin>>n;
    char s = 'A', h = 'B', d = 'C';
    solve(n,s,h,d);
    return 0;
}