#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string s) {    
    unordered_map<string, char> nums = {
    {"zero", '0'}, {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'},
    {"five", '5'}, {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}
    };
    
    string result = "";
    string temp = "";

    for (char c : s) {
        if (isdigit(c)) {
            result += c;
        } else {
            temp += c;  

            if (nums.count(temp)) {
                result += nums[temp];
                temp = "";  
            }
        }
    }

    return stoi(result); 
}
