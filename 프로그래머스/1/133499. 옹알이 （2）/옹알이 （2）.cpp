#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    bool isSame = false;
    vector <string> tell = { "aya", "ye", "woo", "ma"};
    
    for (string word : babbling) {
        string prev = "";
        int idx = 0;
        bool valid = true;

        while (idx < word.size()) {
            bool matched = false;
            for (string t : tell) {
                if (word.substr(idx, t.size()) == t && t != prev) {
                    prev = t;
                    idx += t.size();
                    matched = true;
                    break;
                }
            }
            if (!matched) {
                valid = false;
                break;
            }
        }

        if (valid) answer++;
    }
    
    return answer;
}