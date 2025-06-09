#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num;
    
    while (n > 0){
        num.push_back(n % 10);
        n/=10;
    }
    
    sort(num.begin(), num.end() , greater<int>());
    
    string nums;
    
    for (int a : num) {
        nums += to_string(a);
    }
    
    answer = stoll(nums);
    
    return answer;
}