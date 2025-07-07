#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int temp;
    int remain;
    
    while (n >= a){
        temp = (n / a)* b;
        remain = n % a;
        answer += temp;

        n = temp  + remain; 

    }
    return answer;
}