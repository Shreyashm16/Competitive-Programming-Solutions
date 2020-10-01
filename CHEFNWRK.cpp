#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n , k;
		cin >> n >> k;
		int arr[n];
		int flag = 0;
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		for(int i=0;i<n;i++)
		{
		    if(arr[i]>k)
			{
				cout << "-1" << endl;
				flag = 1;
				break;
			}
		}
		if(flag==1)
		{
			continue;
		}
		int steps = 1;
		long long int sum  = 0;
		for(int i=0;i<n;i++)
		{
			sum+=arr[i];
			if(sum>k)
			{
				steps++;
				sum = arr[i];
			}
		}
		cout << steps << endl;
	}
	return 0;
}