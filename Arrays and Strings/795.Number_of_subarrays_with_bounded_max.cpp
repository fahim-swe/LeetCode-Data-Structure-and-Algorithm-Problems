#include <bits/stdc++.h>
using namespace std;

int numberOfSubarrayWithBoundedMax(vector<int> nums, int left, int right)
{

    int n = nums.size();
    
    int i = 0, j = 0;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] < left || nums[i] > right){
            cout << i-j << endl;
            j = i;
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

    int left, right;
    cin>>left >>right;

    cout << numberOfSubarrayWithBoundedMax(v, left, right) << endl;

}