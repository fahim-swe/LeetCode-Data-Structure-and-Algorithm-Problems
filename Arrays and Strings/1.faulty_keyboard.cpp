// https://leetcode.com/problems/long-pressed-name/

#include <bits/stdc++.h>
using namespace std;

bool isLongPressedName(string name, string typed) {
    
    int i = 0, j = 0;
    while(i < name.size() && j < typed.size()){
        if(name[i] == typed[j]){
            i++, j++;
        }
        else{
            if(i > 0 && name[i-1]==typed[j]){
                j++;
            }
        }
    }

    while(j < typed.size()){
        if(typed[j] != name[i-1]){
            return false;
        }
    }

    return true;
}


int main()
{
    string name, typed;

    cin>>name >> typed;
   
    if(isLongPressedName(name, typed)){
        cout << "true\n";
    }
    else{
        cout << "false\n";
    }
}