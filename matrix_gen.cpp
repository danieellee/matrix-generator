#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int n, m;
    cout << "Enter Row Size of the matrix: ";
    cin >> n;
    cout << "Enter Column Size of the matrix: ";
    cin >> m;

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("value for matrix[%d][%d]: ", i, j);
            cin >> arr[i][j];
        }
    }

    cout << "\n Matrix: \n" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}