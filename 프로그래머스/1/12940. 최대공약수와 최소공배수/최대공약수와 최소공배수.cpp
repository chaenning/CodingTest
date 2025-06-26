#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int min = (n <= m) ? n : m ;
    
    for (int i = min; i> 0 ; i--){
        if(m % i == 0 && n % i == 0) {
            answer.push_back(i); 
            min = i;
            break;             
        }
    }    
    answer.push_back((n * m) / min);      
    
    return answer;
}