#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    string str = "";

    while (n > 0) {
        str += to_string(n % 3);
        n /= 3;
    }
    
    reverse(str.begin(), str.end());

    int power = 1;
    for (char c : str) {
        answer += (c - '0') * power;
        power *= 3;
    }

    return answer;
}
