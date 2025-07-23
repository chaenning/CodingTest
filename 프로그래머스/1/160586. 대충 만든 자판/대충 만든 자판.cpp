#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    unordered_map<char, int> keyPress;
    
     for (const string& key : keymap) {
        for (int i = 0; i < key.size(); ++i) {
            char ch = key[i];
            //키가 존재하는지 확인
            if (keyPress.find(ch) == keyPress.end()) {
                keyPress[ch] = i + 1;
            } 
            else { // 없으면 작은 값 비교해서 값 업데이트
                keyPress[ch] = min(keyPress[ch], i + 1);
            }
        }
    }
    
    for (const string& target : targets){
        int total = 0;
        
        for (char ch : target) {
            if (keyPress.find(ch) == keyPress.end()) {
                total = -1;
                break;
            } 
            else {
                total += keyPress[ch];
            }
        }
        answer.push_back(total);
    }
    
    return answer;
}