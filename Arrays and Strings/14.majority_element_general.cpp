#include <bits/stdc++.h>

using namespace std;

vector<int> majorityElement(vector<int> nums, int k)
{
    map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }

    vector<int> ans;
    for(auto x: mp){
        if(x.second > k){
            ans.push_back(x.first);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n, 0);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }
    int k;
    cin>>k;

    vector<int> ans = majorityElement(v, n/k);

    for(int i= 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
}