#include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& height) {
    int i = 0, j = height.size()-1;

    int water = 0;
    while(i < j){
        int w = j-i;
        int hi = min(height[i], height[j]);

        water = max(water, w*hi);
        if(height[i] < height[j]){
            i++;
        }
        else{
            j--;
        }
    }        

    return water;
}
int main(){
    int n;
    cin>>n;

    vector<int> hi;
    for(int i = 0; i < n; i++){
        int x;cin>>x;
        hi.push_back(x);
    }

    cout << maxArea(hi) << endl;
}