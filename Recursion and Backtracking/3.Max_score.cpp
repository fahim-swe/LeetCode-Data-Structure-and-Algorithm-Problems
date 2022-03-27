// https://leetcode.com/problems/maximum-score-words-formed-by-letters/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int cal(vector<string>& words, vector<char>& letters, vector<int>& score)
    {
        int s = 0;
        int c1 = 0;
        int c = 0;
     
       for(int i = 0; i < words.size(); i++){
           for(int j = 0; j < words[i].size(); j++)
           {
               for(int l = 0; l < letters.size(); l++){
                   if(letters[l] == words[i][j]){
                       letters[l] = '$';
                       c++;
                   }
               }
               // 
               c++;
               //
               s += score[words[i][j]-'a'];
           }
       }


       

       cout << c1 << " " << c << " " << s << "\n";
       return 0;
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
            
            int mx = max(mx, cal(_words, letters, score));

            
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