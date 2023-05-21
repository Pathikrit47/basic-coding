#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x[20];
    float y[20][20];
    int i, j, n;
    // input section
    cout << "enter number of data :";
    cin >> n;
    cout << "enter data : " << endl;
    for (int i = 0; i < n ;i++)
    {
        cout << "x[" << i << "] =";
        cin >> x[i];
        cout << "y[" << i << "] =";
        cin >> y[i][0];
    }
    // seting forword difference table or *RESULT*
    // start of main algo
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            y[j][i] = y[j + 1][i - 1] - y[j][i - 1];
        }
    }
    // end of main algo

    // display
    cout << endl
         << "forword difference table :"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i];
        for (int j = 0; j < n - i; j++)
        {
            cout << "\t" << y[i][j];
        }
        cout << endl;
    }

    return 0;
}