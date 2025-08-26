#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

int dateToDays(string date) {
    int y = stoi(date.substr(0, 4));
    int m = stoi(date.substr(5, 2));
    int d = stoi(date.substr(8, 2));
    return (y * 12 * 28) + (m * 28) + d;
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {

    vector<int> answer;
    map<string, int> termMap;

    for (string t : terms) {
        string type;
        int months;
        stringstream ss(t);
        ss >> type >> months;
        termMap[type] = months;
    }

    int todayDays = dateToDays(today);

    for (int i = 0; i < privacies.size(); i++) {
        string date, type;
        stringstream ss(privacies[i]);
        ss >> date >> type;

        int startDays = dateToDays(date);

        int expireDays = startDays + (termMap[type] * 28) - 1;

        if (todayDays > expireDays) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}