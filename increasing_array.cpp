#include <iostream>
using namespace std;

int main()
{
   long long int n, i, turns = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            turns += arr[i - 1] - arr[i];
            arr[i]=arr[i - 1];
        }
    }
    cout << turns;
}