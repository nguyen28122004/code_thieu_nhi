#include <iostream>

using namespace std;

int solve(int curS, int curP, int n, int k, int maxP, int count)
{
	if(count == k - 1 && curS < n)
	{
		maxP = maxP < curP * (n - curS) ? curP * (n - curS) : maxP;
	}
	else 
		for (int i = 1; i < n; ++i)
			if(i + curS <= n)
			{
				maxP = solve(curS + i, curP * i, n, k, maxP, count + 1);
			}
	return maxP;
}

int main()
{
	int n, k;
	freopen("input.txt", "r", stdin);
	cout << "n\tk\tproduct\n";
	while(cin >> n && cin >> k) {
		cout << n << "\t" << k << "\t" << solve(0, 1, n, k, 1,0) << endl;
	}
	return 0;
}