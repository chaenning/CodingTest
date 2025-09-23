#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    set<pair<string,string>> reports;                  // 중복 제거용
    unordered_map<string,int> reported_count;          // 피신고자 -> 신고 당한 횟수
    unordered_map<string,int> mail_count;              // 신고자 -> 메일 개수

    // 1. 중복 제거하면서 신고 관계 저장
    for (auto &r : report) {
        int pos = r.find(' ');           // 공백 위치 찾기
        string from = r.substr(0, pos);  // 앞부분
        string to = r.substr(pos + 1);   // 뒷부분
        reports.insert({from, to});
    }


    // 2. 각 피신고자가 몇 번 신고당했는지 카운트
    for (auto &p : reports) {
        reported_count[p.second]++;
    }

    // 3. 정지된 유저 집합 (k번 이상 신고당한 사람들)
    unordered_set<string> banned;
    for (auto &rc : reported_count) {
        if (rc.second >= k) banned.insert(rc.first);
    }

    // 4. 신고자별 메일 개수 계산
    for (auto &p : reports) {
        if (banned.count(p.second)) {
            mail_count[p.first]++;
        }
    }

    // 5. id_list 순서에 맞춰 결과 벡터 생성
    vector<int> answer;
    for (auto &id : id_list) {
        answer.push_back(mail_count[id]);
    }
    
    return answer;
}