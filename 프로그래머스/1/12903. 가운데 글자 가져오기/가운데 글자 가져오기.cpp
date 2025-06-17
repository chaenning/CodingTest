#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int size = s.size() / 2;

    if( s.size() % 2 == 0){
        answer = s.substr(size-1, 2);
    }
    else{
        answer = s.substr(size, 1);
    }
    return answer;
}