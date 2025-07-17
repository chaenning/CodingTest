#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    int num;
    for(int i = 1; i <= number; i++){
        num = 1; 
        
        for(int j = 1; j <=i/2 ; j++){
            if(i%j == 0) num++;   
        }   
        
        if(num > limit) {answer += power;}
        else {answer += num;}
    }
    
    return answer;
}