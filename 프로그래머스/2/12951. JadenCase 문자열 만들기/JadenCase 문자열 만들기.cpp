#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    bool isFirst = true;
    for (char &c : s){
        if(c == ' '){ // 공백 이후 단어의 첫 문자는 대문자이기 때문에
            isFirst = true;
        }
        else if (isFirst){ // 첫 문자라면
            if(c <= 57) { // 시작 문자가 숫자라면
                isFirst = false; //변환 없이 isFirst만 false로 바꾸기
            }
            else if(c >=97 && c<=122){ // 소문자일 경우
                c -= 32; //대문자로 변환
            }        
            isFirst = false;
        }
        else { // isFirst가 fals0e == 첫 문자가 아니라면
            if(c >=65 && c<=90) { // 대문자로 되어 있을 경우
                c += 32; // 소문자로 변환
            }
            isFirst = false;
        }
        answer += c;
    }
    
    return answer;
}