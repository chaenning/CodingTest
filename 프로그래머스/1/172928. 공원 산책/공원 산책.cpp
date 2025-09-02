#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int height = park.size();
    int width = park[0].size();
    
    // 시작점 찾기
    int posX, posY;
    
    for (int i = 0; i < height; i++){
        for(int j = 0; j < width; j++){
            if(park[i][j] == 'S'){
                posX = i;
                posY = j;
            }
        }
    }
    
    // 방향 세팅
    unordered_map<char, pair<int, int>> direction = {
        {'N', {-1,0}}, 
        {'S', {1,0}}, 
        {'E', {0,1}}, 
        {'W', {0,-1}}
    };
    
    for (string str : routes){
        char dir = str[0]; // 방향
        int dist = str[2] - '0'; // 거리 (string 타입이기 때문에 int로 전환)
        
        bool shouldMove = true; // 장애물 혹은 영역 밖인지 확인하기 위해
        
        int moveX = posX;
        int moveY = posY;
        
        for (int i = 0; i < dist; i++){ // 거리만큼 이동하며 가능한지 판별
            moveX += direction[dir].first;   // 현재 방향에 맞게 이동
            moveY += direction[dir].second; 
        
            if(moveX < 0 || moveX >= height || moveY < 0 || moveY >= width ) { // 영역 밖으로 나가는지 확인
                shouldMove = false;
                break; // 반복 중지
            }
        
            if(park[moveX][moveY] == 'X'){ // 장애물인지 확인
                shouldMove = false;
                break; // 반복 중지
            }
        }
            
        if(shouldMove){ // 움직여도 된다고 판단 되면 현재 위치 갱신
            posX = moveX;
            posY = moveY;
        }
    }
    
    answer.push_back(posX);
    answer.push_back(posY);
    
    return answer;
}