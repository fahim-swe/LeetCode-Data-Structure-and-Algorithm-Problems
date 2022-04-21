#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> nums)
{
    map<int,int> mp;
    for(int i = 0; i < nums.size(); i++){
        mp[nums[i]]++;
    }

    int n = nums.size()/3;

    vector<int> ans;
    for(auto x: mp){
        if(x.second > n){
            ans.push_back(x.first);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n,0);
    for(int i = 0; i < n; i++){
        cin>>v[i];
    }

    vector<int> ans = majorityElement(v);
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}