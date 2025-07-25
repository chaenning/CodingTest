#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int index;
    vector<int> buggerStack;
    
    for(int num : ingredient){
        buggerStack.push_back(num);
        
        if(buggerStack.size() >= 4){
           index = buggerStack.size() -1;
            // 버거 스택이 1 2 3 1 인지 확인
            if(buggerStack[index-3] == 1 && buggerStack[index-2] == 2 &&
               buggerStack[index-1] == 3 && buggerStack[index] == 1){
                
                // 제거
                for(int i =0; i < 4 ; i++){
                    buggerStack.pop_back();
                }       
                // answer 증가
                answer++;
            }            
        }        
    }     
    
    return answer;
}