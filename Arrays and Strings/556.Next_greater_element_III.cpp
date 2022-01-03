#include <bits/stdc++.h>
using namespace std;

// method-1 using permutation
string method_1(string s){
    
    //1. find the first grate element
    int i = s.size()-2;

    while(i >= 0 && s[i] >= s[i+1]){
        i--;
    }

    // if not found
    if(i==-1){
        return "-1";
    }


    //2. find just greater of ith element
    int k = s.size()-1;
    while(s[k] <= s[i]){
        k--;
    }

    // swap i & k
    swap(s[i], s[k]);

    // sort element from i+1 to end 
    sort(s.begin()+i+1, s.end());

    return s;
}

long nextGreaterElement(long long n){
    string str = method_1(to_string(n));

    long res = stol(str);

    return (res > INT_MAX || res == n) ? -1:res;
}


int main(){
   
   string s;
   cin>>s;
   cout << method_1(s) << endl;
}