#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	long long tot = 0;
	while(n--)
	{
		int a, b;
		cin >> a >> b;
		tot += b - a + 1;
	}
	cout << ((k - (tot % k)) % k) << endl;
	return 0;
}
