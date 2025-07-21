#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int corretCnt = 0;
    int zeroCnt = 0;
    
    bool isSame = false;
    
    for(int num : lottos){ 
        if(num == 0) {
            zeroCnt++;   
        }
    }
    
    for(int i=0; i<win_nums.size(); i++){
        isSame = false;      
        
        for(int num : lottos){ 
            if(num == win_nums[i]){
                isSame = true;
            }        
        }
        if(isSame){
            corretCnt++;
        }
    }
    
    if(zeroCnt == 6){
        answer.push_back(1);
    }
    else{
        if(7 - (corretCnt+zeroCnt) == 7) corretCnt++;
        answer.push_back(7 - (corretCnt+zeroCnt));
    }
    
    if(7 - corretCnt == 7) corretCnt++;
    answer.push_back(7 - corretCnt);
    
    return answer;
}