#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
     unordered_map<char, int> lastIndex;
    
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        if (lastIndex.find(c) != lastIndex.end()) 
        {
            answer.push_back(i - lastIndex[c]);
        } 
        else 
        {
            answer.push_back(-1);
        }
        lastIndex[c] = i;
    }

    return answer;
}

