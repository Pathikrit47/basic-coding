#include <bits/stdc++.h>
using namespace std;

int main()
{
	int row, column;
	cout << "Enter row and column: ";
	cin >> row >> column;
	int matrix[row][column];
	cout << "\nEnter matrix elements:\n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cin >> matrix[i][j];
		}
	}
	cout << "\n";
	cout << "Lower triangular matrix: \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (i < j)
			{
				cout << "0"
					 << " ";
			}
			else
				cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Upper triangular matrix: \n";
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (i > j)
			{
				cout << "0"
					 << " ";
			}
			else
				cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}