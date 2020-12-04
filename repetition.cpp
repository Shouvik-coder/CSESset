#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int count = 1, max_count = 1;
    for (int i = 0; i < (n.length() - 1); i++)
    {
        if (n[i] == n[i + 1])
        {
            count++;
            if (count > max_count)
                max_count = count;
        }
        else
        {

            count = 1;
        }
    }
    cout << max_count;
}