#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> arr = {4, 1, 2};
    vector<int> arr1 = {1, 3, 4, 2};
    vector<int> ans;  // to store final answers
    unordered_map<int, int> m;
    stack<int> s;

    // Fill the map with next greater elements for arr1
    for (int i = arr1.size() - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= arr1[i])
        {
            s.pop();
        }
        if (s.empty())
        {
            m[arr1[i]] = -1;
        }
        else
        {
            m[arr1[i]] = s.top();
        }
        s.push(arr1[i]);
    }

    // Build answer for arr based on the map
    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(m[arr[i]]);
    }

    // Print the result
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
