#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main()
{
	freopen("input.txt", "w", stdout);
	for (int i = 2; i < 50; ++i)
		for (int j = 2; j <= i; ++j)
			cout << i << ' ' << j<< endl;
	return 0;
}