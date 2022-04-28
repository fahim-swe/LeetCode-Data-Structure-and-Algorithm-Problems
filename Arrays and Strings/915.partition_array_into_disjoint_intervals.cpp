#include <bits/stdc++.h>
using namespace std;

int partitionDisjoint(vector<int>& nums) {
    
   int n = nums.size();

   vector<int> lMax(n+1, 0), rMin(n+1, 0);

   // left max
   lMax[0] = nums[0];
   for(int i = 1; i < n; i++)
   {
       lMax[i] = max(nums[i], lMax[i-1]);
   }

   rMin[n] = INT_MAX;
   for(int i = n-1; i >= 0; i--){
       rMin[i] = min(nums[i], rMin[i+1]);
   } 

   int ans = 0;
   for(int i = 0; i < n; i++)
   {
       if(lMax[i] <= rMin[i+1]){
           ans = i+1;
           break;
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