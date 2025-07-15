#include <bits/stdc++.h>
using namespace std;

// IBH se kara h 
// wohi socha chote ka sahi answer lekar aa bade current walo ko m smbhal lunga
// void subset(string &str, vector<string> &result) {
//     if (str.length() == 0) {
//         result.push_back("");
//         return;
//     }

//     char ch = str.back();
//     str.pop_back();

//     subset(str, result);  // recurse on smaller string
        // {"","A","B"}
        // suppose ye lekar aaya 
//     int n = result.size();  // capture current size before modifying
//     for (int i = 0; i < n; ++i) {
//         result.push_back(result[i] + ch);
//     }

//     str.push_back(ch); // restore original string after recursion (optional here)
// }

//ip op method h bas mene index se kara h 
// take not take isslie chlrha h as dekhega to isme kuh esa nhi ki pehle pe ye choice h dusre pr wo choice h 


void subset(string &str, int idx, string curr) {
    if(idx==str.size()){
        cout<<curr<<endl;
        return;
    }
    string op1 = curr;
    subset(str, idx+1, op1);
    string op2 = curr + str[idx];
    subset(str, idx+1, op2);
}


int main() {
    string str = "ABC";
    // vector<string> result;
    string curr="";
    subset(str, 0,curr);

    // for (const string &s : result) {
    //     cout << s << endl;
    // }

    return 0;
}


