#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int num = section[0] + m;
    
    for(int i =1; i< section.size(); i++){
        if(num <= section[i]){
            num = section[i] + m;
            answer++;
        }        
    }    
    
    return answer;
}