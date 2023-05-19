#include <iostream>
#include <ctime>

#define N 5000
#define Q 5000
using namespace std;

int main()
{
	freopen("input.txt", "w", stdout);
	cout << N << '\n';
	srand(time(0));
	for (int i = 0; i < N; ++i)
		cout << rand() % 200000 << ' ';

	cout << Q << '\n';
	for (int i = 0; i < Q; ++i)
		cout << rand() % 4000 << ' ';
	return 0;
}
