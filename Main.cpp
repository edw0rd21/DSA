#include <iostream>
#include <cmath>
using namespace std;

int N, X;

void result(int N, int X)
{
	int a = N;
	int b = N - X;
	int plus_coins = 0, minus_coins = 0; 
	for (int j = 0; j < X; j++)
	{
		plus_coins += pow(2, a);
		a--;
	}
	for (int j = 0; j < N - X; j++)
	{

		minus_coins += pow(2, b);
		b--;
	}
	int total_coins = plus_coins - minus_coins;
	cout << total_coins << endl;
}
int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int N, X;
		cin >> N >> X;
		result(N, X);
	}
	return 0;

}
