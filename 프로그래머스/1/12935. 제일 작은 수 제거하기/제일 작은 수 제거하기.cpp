#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    if(arr.size() <= 1) {
        arr[0] = -1;
        return arr;
    };
    
    int n = arr[0];
    int minIndex = 0;
    for(int i = 1 ; i< arr.size(); i++){
        if(n > arr[i])  {
            n = arr[i];
            minIndex = i;
        }
    }
    
    arr.erase(arr.begin() + minIndex);    
    
    return arr;
}