#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	unordered_set<int> res; // set này chứa các số đã bị lọc ra
	// Lấy input
	int n;
	cin >> n;
	int arr[n];
	for(int &i : arr) 
		cin >> i;

	int q;
	cin >> q;
	int L[q]; // Mảng L chứa số truy vấn
	for (int &i : L)
		cin >> i;
	// Xử lí
	for(int start_point : L) // Duyệt mảng L
	{
		for (int i = start_point; i < n; ++i)	// Duyệt từ chỉ số L đến N -1
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