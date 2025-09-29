#include <string>
#include <vector>

using namespace std;


int solution(int n) {
    int answer = 0;
    int fiboNum;
    vector <int> FiboV;
    
	FiboV.push_back(0);
	FiboV.push_back(1);
    
	if (n < 2) 
	{
		return n;
	}
	else
	{
		for (int i = 2; i <= n; i++)
		{
			FiboV.push_back((FiboV[i - 1] + FiboV[i - 2]) % 1234567); 
		}
	}
    
	fiboNum =  FiboV[n];
    
    return fiboNum;
}