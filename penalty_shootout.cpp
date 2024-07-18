/* Question:  (source: contest 142, codechef)
In a football match, a penalty shootout is used to determine the winner if the score is tied after regulation and extra time. Each team takes turns attempting five penalty kicks.

Team A has scored X goals in 3 turns while team B has scored Y goals in 4 turns.
Determine if it's possible for the penalty shootout to end with equal score after both teams have taken all 5 of their penalty kicks.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers X and Y — the number of goals scored by team A in 3 turns and team B in 4 turns respectively.

Output Format
For each test case, output on a new line YES if match can still end in draw, otherwise output NO.*/

#include <iostream>

int x, y;

void result(int x, int y)
{
	if (x - y > 1 || y - x > 2) {
		std::cout << "NO"<<std::endl;
	}
	else {
		std::cout << "YES" << std::endl;
	}
}
int main() {
	int T;
	std::cin >> T;
	while (T--) {
		std::cin >> x >> y;
		result(x, y);
	}
	return 0;
}
