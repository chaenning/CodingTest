#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long num  = (long long)sqrt(n);
    
    if( (num * num) == n && num > 0)
    {
        answer = (num + 1) * (num + 1);
    }    
    else answer = -1;
    
    return answer;
}