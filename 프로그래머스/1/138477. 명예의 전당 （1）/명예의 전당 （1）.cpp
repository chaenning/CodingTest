#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> kScore;
    
    for(int i = 0; i < score.size(); i++){
        if(i<k)
        {
            kScore.push_back(score[i]);
            sort(kScore.begin(), kScore.end(), [](int a, int b) { return a > b; });
            answer.push_back(kScore.back());
        }
        
        else if(kScore.back() < score[i])
        {
            kScore.pop_back();
            kScore.push_back(score[i]);
            sort(kScore.begin(), kScore.end(), [](int a, int b) { return a > b; });
            answer.push_back(kScore.back());
        }
        
        else 
        {
             answer.push_back(kScore.back());
        }
    }
    
    return answer;
}