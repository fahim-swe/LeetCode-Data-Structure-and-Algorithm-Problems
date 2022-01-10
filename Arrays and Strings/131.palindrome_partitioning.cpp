#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> partition(string s) {
      vector<vector<string>> ans;

      for(int i = 0; i < s.size(); i++)
      {
          for(int len = 1; len < s.size()-i; len++){
              cout << s.substr(i, len) << endl;
          }
      }

      return ans;
}

int main(){
    string s;

    cin>>s;

    vector<vector<string>> ans = partition(s);
}