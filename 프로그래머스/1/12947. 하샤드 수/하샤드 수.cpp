#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    int y = x;
    
    while(y > 0){
        num +=  y%10;
        y /= 10;
    }
    
    answer = x % num == 0 ? true : false;

    
    return answer;
}