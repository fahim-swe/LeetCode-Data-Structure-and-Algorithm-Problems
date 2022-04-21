#include <bits/stdc++.h>
using namespace std;

int maximumProduct(vector<int> nums)
{
    sort(nums.begin(), nums.end());

    return max(nums[0]*nums[1]*nums[nums.size()-1], nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);
}
int main()
{
    int n;
    cin>>n;

    vector<int> v(n, 0);

    for(int i = 0; i < n; i++){
        cin>>v[i];
    }


}