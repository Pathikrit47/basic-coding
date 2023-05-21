#include<iostream>
using namespace std;
// calculating u mentioned in the formula
float u_cal(float u, int n)
{
	float temp = u;
	for (int i = 1; i < n; i++)
		temp = temp * (u - i);
	return temp;
};

// calculating factorial of given number n
int fact(int n)
{
	int f = 1;
	for (int i = 2; i <= n; i++)
		f *= i;
	return f;
};

int main()
{
	// Number of values given
    int n;
    cout<<"enter the terms:"<< endl;
	cin>>n>>endl;
	float x[n];
	
	// y[][] is used for difference table
	// with y[][0] used for input
	float y[n][n];
	y[0][0] = n-4;
	y[1][0] = n-3;
	y[2][0] = n-2;
	y[3][0] = n-1;

	// Calculating the forward difference
	// table
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++)
			y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
	}

	// Displaying the forward difference table
	for (int i = 0; i < n; i++) {
		cout << (4) << x[i]
			<< "\t";
		for (int j = 0; j < n - i; j++)
			cout << (4) << y[i][j]
				<< "\t";
		cout << endl;
	}

	// Value to interpolate at
	float value = 52;

	// initializing u and sum
	float sum = y[0][0];
	float u = (value - x[0]) / (x[1] - x[0]);
	for (int i = 1; i < n; i++) {
		sum = sum + (u_cal(u, i) * y[0][i]) /
								fact(i);
	}

	cout << "\n Value at " << value << " is "
		<< sum << endl;
	return 0;
}
