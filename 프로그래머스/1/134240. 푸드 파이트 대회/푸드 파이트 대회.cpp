#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    int foodNum;
    
    for(int i = 1; i< food.size(); i++){
        if(food[i] >= 2){
            foodNum = food[i] / 2;
             for(int j = 0; j< foodNum; j++){
                answer += to_string(i);    
            }
        }
    }
    
    string str = answer;
    answer += "0";
        
     for(int i = 0; i< str.length(); i++){
        answer += str[str.length() - i - 1];
     }    
    
    return answer;
}