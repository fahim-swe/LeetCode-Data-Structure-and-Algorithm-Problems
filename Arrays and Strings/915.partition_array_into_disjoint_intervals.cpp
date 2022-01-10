#include <bits/stdc++.h>
using namespace std;

int partitionDisjoint(vector<int>& nums) {
    
    int ans = 1;
    int min = nums[0];

    for(int i = 1; i < nums.size(); i++){
        if(min >= nums[i]){
            ans = i+1;
        }
        else{
            min = max(min, nums[i]);
        }
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i = 0; i< n; i++){
        cin >> v[i];
    }

    cout << partitionDisjoint(v) << endl;
}