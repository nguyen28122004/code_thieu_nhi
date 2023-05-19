#include <iostream>
#include <set>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	set<int> res; // set này chứa các số đã bị lọc ra
	// Lấy input
	int n;
	cin >> n;
	int arr[n];
	for(int &i : arr)
		cin >> i;

	int q;
	cin >> q;
	int L[q];
	for (int &i : L)
		cin >> i;
	// Xử lí
	for(int start_point : L)
	{
		for (int i = start_point; i < n; ++i)
		{
			if(res.count(arr[i]) == 1)
				continue;
			res.insert(arr[i]);
		}
		cout << res.size() << '\n';
		res.clear();
	}

	return 0;
}
