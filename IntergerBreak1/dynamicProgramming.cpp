#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int baseCase(std::vector<int> &a, int n) // Tạo case cơ sở
{
	for (int k = 1; k <= n; ++k) // Index của mảng base
		for(int i = 2;i <= k;i++) // Tách k thành 2 hạng tử i và k - i
		{
			a[k]= max({a[k], i * (k - i)});
		}
}

int solve(int n, int k)
{
	std::vector<int> base(n + 1, 1); // mảng chứa case cơ sở (tách thành 1 hạng tử) 
	std::vector<vector<int>> a(k + 1, base);
	baseCase(base, n);
	a[2] = base;
	for (int i = 3; i <= k; ++i)// Duyệt từng hàng
		for (int j = i; j <= n; ++j) // Duyệt từng phần tử trong hàng
			for (int m = i; m < j; ++m) // Duyệt từng phần tử trong hàng trước đó
			{
				// cout << a[i][j] << '|' << a[i - 1][j - m] << '*' <<  m <<"|"<<  a[i - 1][m] * (j - m) << endl;;
				if(j - m >= m)
						a[i][j] = max(a[i][j], a[i - 1][j - m] * m);
				a[i][j] = max({a[i][j], a[i - 1][m] * (j - m)});	
			}

	return a[k][n];
}

int main()
{
	int n, k;
	freopen("input.txt", "r", stdin);
	cout << "n\tk\tproduct\n";
	while(cin >> n && cin >> k) {
		cout << n << "\t" << k << "\t" << solve(n, k) << endl;
	}
	return 0;
}