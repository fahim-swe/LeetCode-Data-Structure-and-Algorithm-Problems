// https://www.lintcode.com/problem/903/description

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    /**
     * @param length: the length of the array
     * @param updates: update operations
     * @return: the modified array after all k operations were executed
     */
    vector<int> getModifiedArray(int length, vector<vector<int>> &updates) {
        // Write your code here

        vector<int> ans(length+1, 0);

        for(int i = 0; i < updates.size(); i++)
        {
            int f = updates[i][0];
            int l = updates[i][1];
            int val = updates[i][2];

            ans[f] += val;
            ans[l+1] -= val;
        }

        for(int i = 1; i < length+1; i++){
            ans[i] += ans[i-1];
        }

        ans.pop_back();
        return ans;
    }
};

int main()
{
    int l;
    cin>>l;
    int n;
    cin>>n;

    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin>>x >> y >> z;
        vector<int> t = {x,y,z};
        v.push_back(t);
    }

    Solution s;
    vector<int> ans = s.getModifiedArray(l, v);

    for(auto x: ans){
        cout << x << " ";
    }
    cout << endl;
}
