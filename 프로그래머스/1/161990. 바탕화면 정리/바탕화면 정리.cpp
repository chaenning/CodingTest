#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int x1, x2, y1, y2 = -1;
    bool isFirst = true;
    
    for (int i = 0; i<wallpaper.size(); i++){
        for(int j = 0; j<wallpaper[i].size(); j++){
            if(wallpaper[i][j] == '#'){
                if(isFirst){
                    x1 = i;
                    x2 = i;
                    y1 = j;
                    y2 = j;
                    isFirst = false;
                }
                if(j < y1){
                     y1 = j;
                }
                if(i > x2){
                    x2 = i;
                }                
                if(j > y2){
                     y2 = j;
                }
            }
        }
    }
    
    x2 += 1;
    y2 += 1;

    answer.push_back(x1);
    answer.push_back(y1);
    answer.push_back(x2);
    answer.push_back(y2);
    return answer;
}