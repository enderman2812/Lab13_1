#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
using namespace std;

int** MakeMatr(int m, int n)
{
	int** t;
	t = new int* [m];
	for(int i = 0; i < m; i++)
	{
		t[i] = new int [n];
		for(int j = 0; j < n; j++)
			t[i][j] = rand() % 10;
	}
	return t;
}

int main()
{
	int sum, i, j;
	int **a;
	int B[10];
	a = MakeMatr(10,10);
	cout << a[i][j];
	for(int j = 0; j < 10; j++)
	{
		sum = 0;
		for(i = 0; i < 10; i++)
			sum += a[j][i];
		sum = sum/i;
		B[j] = sum;
		cout << B[j] << " ";

		int z = 0;
		for(i = 0; i < 10; i++)
		{
			sum =+ a[i][j];
			sum = sum/i;
			if(sum > a[i][j])
				z = z + 1;
			cout << z << endl;
		}
	}

	system("PAUSE");
}