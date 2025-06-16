#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() <= 1) {
        arr[0] = -1;
        return arr;
    };
    

    int minIndex = 0;
    for(int i = 1 ; i< arr.size(); i++){
        if(arr[i] < arr[minIndex])  {
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);    
    
    return arr;
}