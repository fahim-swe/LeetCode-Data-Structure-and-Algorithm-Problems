#include <bits/stdc++.h>

using namespace std;

void permutation(int idx, int si, string pfs, map<char,int> mp)
{
    if(idx >= si){
        cout << pfs << endl;
    }
    else{

        for(auto x: mp){
            if(x.second > 0){
                mp[x.first]--;
                permutation(idx+1, si, pfs+x.first, mp);
                mp[x.first]++;
            }
        }
    }
}

int main()
{
    string str;
    cin >> str;

    map<char,int> mp;

    for(auto x: str){
        mp[x]++;
    }

    permutation(0, str.size(), "", mp);

}