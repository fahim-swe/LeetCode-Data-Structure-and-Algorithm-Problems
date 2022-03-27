#include<iostream>
using namespace std;
    void solution(string str, string asf,int count, int pos)
    {
        if(str.size() == pos){
            if(count == 0){
                cout << asf << endl;
            }
            else{
                cout << asf << to_string(count) << endl;
            }

            return ;
        }

        // add 
        if(count == 0){
            solution(str, asf+str[pos], 0, pos+1);
        }
        else{
            solution(str, asf+to_string(count)+str[pos], 0, pos+1);
        }
        solution(str, asf, count+1, pos+1);
    }
	int main() {
        string str;
        cin >> str;
        solution(str,"",0,0);
        return 0;
    }