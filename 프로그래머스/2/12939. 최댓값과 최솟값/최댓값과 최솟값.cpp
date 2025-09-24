#include <string>
#include <set>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    set<int> numbers;
    
    stringstream ss(s);
    int n;
    while (ss >> n) {
        numbers.insert(n);
    }
    
    int min = *numbers.begin();
    int max = *numbers.rbegin();
    
    return to_string(min) + " " + to_string(max);

}