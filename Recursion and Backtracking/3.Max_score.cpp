// https://leetcode.com/problems/maximum-score-words-formed-by-letters/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int cal(vector<string> words, vector<char> letters, vector<int> score)
    {
       string t;
       for(int i = 0; i < letters.size(); i++){
           t += letters[i];
       }

        string t1;

        for(auto x: words){
            t1 += x;
        }

        int c = 0;


        for(auto x: t1){

            for(int i = 0; i < t.size(); i++){
                if(t[i] == x){
                    t[i] = '$';
                    c++;
                    break;
                }
            }
        }

        if(c == t1.size()){
            int ans = 0;
            for(auto x: t1){
                ans += score[x-'a'];
            }

            return ans;
        }
        return -1;
    }
   
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        

        int mx = 0;
       
        for(int i = 0; i < pow(2, words.size()); i++)
        {
            
            vector<string> _words;

            for(int j = 0; j < words.size(); j++)
            {
                if((i & (1 << j))){
                    _words.push_back(words[j]);
                }
            }            
            
            mx = max(mx, cal(_words, letters, score));
            
        }

        return mx;
    }
};

int main()
{
    Solution s;

    vector<string> words = {"xxxz","ax","bx","cx"};

    vector<char> letter = {'z','a','b','c','x','x','x'};

    vector<int> score = {4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10};

    cout << s.maxScoreWords(words, letter, score);
}