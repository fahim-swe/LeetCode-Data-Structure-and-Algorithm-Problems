#include <bits/stdc++.h>
using namespace std;

void solution(string str, string sub, int c)
{
    if(str.size() == 0){
        if(c == 0){
            cout << str << endl;
        }
        else{
            cout << str << c << endl;
        }
    }

    // if take
    if(c != 0){
        solution(str.substr(1), sub+to_string(c)+str[0], 0);
    }
    else{
        solution(str.substr(1), sub+str[0], c);
    }

    solution(str.substr(1), sub, c+1);
}
int main()
{
    string str;

    cin>>str;

    solution(str, "", 0);
}