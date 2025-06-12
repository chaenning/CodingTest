#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
	vector<int> answer;
	bool isAnswer = false;
	for (int num : arr) {
		if (num % divisor == 0) {
			answer.push_back(num);
			isAnswer = true;
		}
	}

	if (isAnswer) {
		sort(answer.begin(), answer.end());
	}
	else { answer.push_back(-1); }

	return answer;
}