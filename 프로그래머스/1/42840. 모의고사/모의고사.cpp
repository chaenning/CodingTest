#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<vector<int>> people = {
        {1,2,3,4,5},
        {2,1,2,3,2,4,2,5},
        {3,3,1,1,2,2,4,4,5,5}
    };

    int score[3] = {0, 0, 0}; 
    int index[3] = {0, 0, 0}; 

    for (int i = 0; i < answers.size(); i++) {
        for (int p = 0; p < 3; p++) {
            if (people[p][index[p]] == answers[i]) {
                score[p]++;
            }
            index[p]++;
            if (index[p] == people[p].size()) index[p] = 0;
        }
    }

    int maxScore = max({score[0], score[1], score[2]});
    for (int i = 0; i < 3; i++) {
        if (score[i] == maxScore)
            answer.push_back(i + 1); 
    }        
    
    return answer;
}