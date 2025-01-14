#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int* num = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	int min= num[0], max = num[0];

	for (int i = 0; i < n; i++)
	{
		if (num[i] < min)
			min = num[i];
		if (num[i] > max)
			max = num[i];
	}

	cout << min << " " << max;

	return 0;
}