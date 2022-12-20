#include <bits/stdc++.h>
using namespace std;
int main()
{
    //vectors
    vector<int> v1 = { 10, 20, 5, 40, 2, 30 };
    vector<int> v2 = { 100, 10, 20, 30, 200, 300 };
    //sorting the vectors
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    // Print the vectors
    cout << "v1: ";
    for (int x : v1)
        cout << x << " ";
    cout << endl;
    cout << "v2: ";
    for (int x : v2)
        cout << x << " ";
    cout << endl;
    //declaring result vector to
    //store the common elements
    vector<int> v3(v1.size() + v2.size());
    //iterator to store return type
    vector<int>::iterator it, end;

    end = set_intersection(
        v1.begin(), v1.end(),
        v2.begin(), v2.end(),
        v3.begin());

    cout << "Common elements v3: ";
    for (it = v3.begin(); it != end; it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}

