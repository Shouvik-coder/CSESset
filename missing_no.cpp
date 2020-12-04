#include <iostream>
using namespace std;

int main()
{
    long long int n, sum_total, num, sum_current=0;
    cin >> n;
    sum_total = (n * (n + 1)) / 2;
    for (int i = 1; i < n; i++)
    {
        cin >> num;
        sum_current += num;
    }
    cout << sum_total - sum_current;
}