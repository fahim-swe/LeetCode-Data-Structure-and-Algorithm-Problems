#include <bits/stdc++.h>
using namespace std;

int maxChunks(vector<int> v)
{
    int n = v.size();
    vector<int> mn(n, 0), mx(n, 0);

    int temp = INT_MIN;
    for(int i = 0; i < n; i++){
        temp = max(v[i], temp);
        mx[i] = temp;
    }

    temp = INT_MAX;
    for(int i = n-1; i >= 0; i--){
        temp = min(temp, v[i]);
        mn[i] = temp;
    }

    int ans = 1;

    for(int i = 0; i < n-1; i++){
        if(mx[i] <= mn[i+1]){
            ans++;
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

    cout << maxChunks(v) << endl;
}