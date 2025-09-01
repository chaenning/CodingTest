#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
     unordered_map<string, int> pos; // 선수 이름 -> 현재 인덱스
    
    // 초기 위치 저장
    for (int i = 0; i < players.size(); i++) {
        pos[players[i]] = i;
    }
    

    for (string& name : callings) {
        int index = pos[name];            // 현재 위치
        int prev_index = index - 1;       // 앞 선수 위치
        string prev_player = players[prev_index];

        // 두 선수 위치 변경
        players[prev_index] = name;
        players[index] = prev_player;

        // 맵 업데이트
        pos[name] = prev_index;
        pos[prev_player] = index;
    }

    return players;
}