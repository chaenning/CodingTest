#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    vector<long long> vec;

    for(long long i = left; i<= right; i++){        
        int x = i / n;
        int y = i % n;
        
        if(x > y) {
            answer.push_back(x + 1);
        }
        else {
            answer.push_back(y + 1);
        }        
    }
    
    return answer;
}