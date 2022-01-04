#include <bits/stdc++.h>
using namespace std;
vector<int> getModifiedArray(int lenght, vector<vector<int>> queries){
    
    vector<int> ans(lenght+1);

   
    for(int i = 0; i < queries.size(); i++){
        ans[queries[i][0]] += queries[i][2];
        ans[queries[i][1]+1] -= queries[i][2];
    }

    for(int i = 1; i < ans.size(); i++){
        ans[i] += ans[i-1];
    }

    ans.pop_back();
    return ans;
}

int main()
{
    int length, nq;
    cin>>length>>nq;
    
    vector<vector<int>> queries(nq, vector<int> (3,0));

    for(int q = 0; q < nq; q++) {
        cin>>queries[q][0]>>queries[q][1]>>queries[q][2];
    }

    vector<int> res = getModifiedArray(length, queries);

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }

}