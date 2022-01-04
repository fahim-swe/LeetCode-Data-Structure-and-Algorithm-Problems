#include <bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums){
    vector<int> ans;

    vector<int> left(nums.size()), right(nums.size());

    int prod = 1;
    for(int i = 0; i < nums.size(); i++){
        prod *= nums[i];
        left[i] = prod;
    }

    prod = 1;
    for(int i = nums.size()-1; i >= 0; i--){
        prod *= nums[i];
        right[i] = prod;
    }


    for(int i = 0; i < nums.size(); i++){
        if(i==0){
            ans.push_back(right[1]);
        }
        else if(i==nums.size()-1){
            ans.push_back(left[nums.size()-2]);
        }
        else{
            ans.push_back(left[i-1]*right[i+1]);
        }
    }



    return ans;
}

int main(){
    int n;
    int x;
    cin>>n;

    vector<int> v;
    for(int i = 0; i < n; i++){
        cin>>x;
        v.push_back(x);
    }

    vector<int> ans = productExceptSelf(v);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}