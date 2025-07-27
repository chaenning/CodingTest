#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "RCJA";
    map <char, int> mbti;
    
    for(int i=0; i<survey.size(); i++){
        int score = 0;
        if(choices[i] <= 3){
            score = 4 - choices[i];
            mbti[survey[i][0]] += score;
        }
        else if(choices[i] >= 5){
            score = choices[i] - 4;
            mbti[survey[i][1]] += score;
        }
    }
    
    if(mbti['R'] < mbti['T']){
        answer[0] = 'T';
    }
    if(mbti['C'] < mbti['F']){
        answer[1] = 'F';
    }
    if(mbti['J'] < mbti['M']){
        answer[2] = 'M';
    }
    if(mbti['A'] < mbti['N']){
        answer[3] = 'N';
    }
    
    return answer;
}