#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    //빠른 검색을 위해 set만들기
    unordered_set<char> skip_set(skip.begin(), skip.end());
            
     for (char ch : s) {
        int count = 0;
        char c = ch;

        // index 만큼 더하기 (skip 문자는 세지 않음)
        while (count < index) {
            c++;
            if (c > 'z') c = 'a';
            if (skip_set.find(c) != skip_set.end()) continue;  // skip 문자면 count 안 증가
            count++;
        }

        answer.push_back(c);
    }
    return answer;
}