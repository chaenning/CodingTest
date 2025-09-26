#include <string>
#include <vector>

using namespace std;

string toBinary(int num) { // 10진수를 2진수로 변환하기
    string result = "";
    while (num > 0) {
        result = char('0' + (num % 2)) + result; 
        num /= 2;
    }
    return result;
}


vector<int> solution(string s) {
    vector<int> answer;
    int count = 0; // 회차
    int zeroCount = 0; // 제거한 0의 개수
    
    while (s != "1"){ // s 가 1이 될 때 까지 반복
        count++; // n 회차
        
        int nowZeroCount = 0;
        int sSize = 0;
        
        for(int i =0; i< s.size(); i++){            
            if(s[i] == '0'){ // 현재 문자가 0이라면
                nowZeroCount++;
            }
        }
        sSize = s.size() - nowZeroCount; // 0 제거 후 길이
        s = toBinary(sSize); // s를 sSize를 이진수로 변환한 값으로 바꾸기
        
        zeroCount += nowZeroCount; // 제거한 0의 총 개수 추가하기
    }
    
    answer.push_back(count);
    answer.push_back(zeroCount);
    
    return answer;
}