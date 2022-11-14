#include <iostream>
#include <cmath>
 
using namespace std;

int main()
{
    int N, M, p;
    cout << "Input N and M:" << endl;
    cout << "N = ";
    cin >> N;
    cout << "M = ";
    cin >> M;
    int A[N][M], B[M];

    cout << "Input values:" << endl;
    for (int i = 0; i < N; i++) 
    {
        for (int k = 0; k < M; k++) 
        {
            cin >> A[i][k];
        }
    }

    for (int k = 0; k < M; k++) 
    {
        p = 0;
        for (int i = 0; i < N; i++) 
        {
        if (A[i][k] == 0)
            p++;
        }
        if (p == N)
        {
            B[k] = 0;
        }
        else
        {
            B[k] = 1;
        } 
    }

    cout << "Sorted array is:" << endl;
    for (int k = 0; k < M; k++) 
    {
        cout << B[k] << " ";
    }

    cout << endl;
    return 0;
}