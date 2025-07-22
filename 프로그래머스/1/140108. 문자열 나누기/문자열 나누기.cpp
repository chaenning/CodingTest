#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int xCount = 0;
    int yCount = 0;
    char x;
    bool b = false;

    for(int i=0; i<s.size(); i++){
        if(!b){
            x = s[i];   
            xCount = 1;
            b = true;
        }
        else if(x == s[i]){
            xCount++;
        }
        else{
            yCount++;
        }
        
        if(xCount == yCount){
            answer ++;
            b = false;
            yCount = 0;
            xCount = 0;
        }
    }
    
    if (xCount != 0 || yCount != 0) {
        answer++;
    }
    
    return answer;
}