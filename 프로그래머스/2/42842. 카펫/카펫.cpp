#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int height; // 가로
    int width;  // 세로
    
    int total = brown + yellow; // 전체 격자 수 brown + yellow
    
    // yellow = (width - 2) * (height - 2)
    // total = width * height
    
    // 안에 노란색이 포함 되어 있으니 최소 3부터 시작
    for (height = 3; height <= total / height; height++) {
        if (total % height != 0) continue; // 약수가 아니면 패스
        width = total / height;
        
        if ((width - 2) * (height - 2) == yellow) {
            break; // 가로가 더 크거나 같음
        }
    }
    
    answer.push_back(width);
    answer.push_back(height);
    
    return answer;
}