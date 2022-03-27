#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void dfs(vector<int> &ans, int i, int n)
    {
        if(i > n){
            return ;
        }

        ans.push_back(i);

        for(int j = 0; j < 10;  j++)
        {
            dfs(ans, 10*i+j, n);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int i = 1; i <= 9;  i++)
        {
            dfs(ans, i, n);
        }    

        return ans;
    }
};

int main()
{
    Solution s;
    int n;
    cin>>n;

    vector<int> ans = s.lexicalOrder(n); 

    for(auto x: ans){
        cout << x << endl;
    }
}