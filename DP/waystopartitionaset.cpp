// C++ code for the above approach:
#include <bits/stdc++.h>
using namespace std;

// Function to print a partition
vector<vector<int>> res;
void printPartition(vector<vector<int> > ans)
{
    for (auto i : ans) {
        cout << "{ ";
        for (auto element : i) {
            cout << element << " ";
        }
        cout << "} ";
    }
    cout << endl;
}

// Function to generate all partitions
void Partition(vector<int> set, int index,
               vector<vector<int> >& ans)
{

    // If we have considered all elements
    // in the set print the partition
    if (index == set.size()) {
        for(auto i:ans) 
            res.push_back(i);
        return;
    }

    // For each subset in the partition
    // add the current element to it
    // and recall
    for (int i = 0; i < ans.size(); i++) {
        ans[i].push_back(set[index]);
        Partition(set, index + 1, ans);
        ans[i].pop_back();
    }

    // Add the current element as a
    // singleton subset and recall
    ans.push_back({ set[index] });
    Partition(set, index + 1, ans);
    ans.pop_back();
}

// Function to generate all
// partitions for a given set
void allPartitions(vector<int> set)
{
    vector<vector<int> > v;
    Partition(set, 0, v);
    printPartition(res);
}

// Main function
int main()
{

    // The size of the set
    int n = 3;

    // Initialize the set as
    // {1, 2, ..., n}
    vector<int> set(n);
    for (int i = 0; i < n; i++) {
        set[i] = i + 1;
    }
    cout << "All partition of the set will be : " << endl;

    // Generate all partitions of the set
    allPartitions(set);
    return 0;
}