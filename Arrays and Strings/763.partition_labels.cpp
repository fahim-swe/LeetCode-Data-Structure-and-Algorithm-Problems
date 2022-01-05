#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s) {

    vector<int> ans;
    map<char,int> mp;

    for(int i = 0; i < s.size(); i++){
        mp[s[i]] = i;
    }


    int pre = -1, mx = 0;

    for(int i = 0; i < s.size(); i++){
        mx = max(mx, mp[s[i]]);

        if(mx == i){
            ans.push_back(mx-pre);
            pre = mx;
        }
    }

    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());

    return ans;    
}

int main(){
   
    string s;
    cin>>s;

    vector<int> ans = partitionLabels(s);

    for(auto x: ans){
        cout << x << " ";
    }

}