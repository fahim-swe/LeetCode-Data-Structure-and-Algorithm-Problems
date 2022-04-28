#include <bits/stdc++.h>
using namespace std;


void permutation(int idx, int si, string str, string psf)
{
    if(str.size() == 0){
        cout << "INSIDE = : ";
        cout <<psf << endl;
    }
    else{

        for(int i = 0; i < psf.size(); i++){
            
        }

    }
}

int main()
{
    string str;
    cin>>str;

    string tem;
    
    for(auto x: str){
        tem += '-';
    }

    permutation(0, str.size(), str, tem);
}