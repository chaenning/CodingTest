#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    bool isEven = true;
    for(int i=0; i<s.size(); i++){
        if(s[i] != ' '){
            if(isEven){
                 s[i] = toupper(s[i]);
            }
            else {
                s[i] = tolower(s[i]);
            }            
            isEven = !isEven;
        }
        else { isEven = true; }
    }
    
    return s;
}