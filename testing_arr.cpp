#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
using namespace std;


int main()
{
    int m,n;
    cin>>m>>n;
	int arr[m][n] = {{10, 20},
					 {30, 40},
					 {50, 60}};

	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
	}


	return 0;
}
