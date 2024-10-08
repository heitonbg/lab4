#include <iostream>
#include <random>
 
using namespace std; 
 
int main()
{
    const int N = 3;
    int A[N][N];
    mt19937 gen {random_device()()};
    uniform_int_distribution <> dist (-10, 10);
 
    cout << "Before:\n";
    for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j++)
        {
            A[i][j] = dist(gen);
            cout << A[i][j] << " ";
            A[i][j] = (A[i][j] > 0);
        }
        cout << endl;
    }
 
    cout << "After:\n";
    for (int i=0; i < N; i++)
    {
        for (int j=0; j < N; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
}